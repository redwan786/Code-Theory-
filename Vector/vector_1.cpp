#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declare a vector to store integers
    vector<int> s;

    // Ask the user for the number of values to input
    cout << "How many values do you want to keep: ";
    int size;

    // Input the size
    cin >> size;

    // Ask the user to enter values
    cout << "Enter " << size << " values: ";

    // Loop to input values into the vector
    for(int i = 0; i < size; i++)
    {
        int temp;
        // Input a value
        cin >> temp;

        // Push the value to the vector
        s.push_back(temp);
    }

    // Display the size of the vector
    cout << "Size of vector: " << s.size() << "\n";

    // Display the values in the vector using a while loop
    int i = 0;
    cout << "Vector Values: ";
    while(i != s.size())
    {
        cout << s[i] << " ";
        i++;
    }
    cout << "\n";

    // Add more values to s vector
    int numOfValue;
    cout << "\nEnter how many values you want to add: ";
    cin >> numOfValue;
    cout << "Enter " << numOfValue << " values: ";

    for (int j = 0; j < numOfValue; j++)
    {
        int temp;
        cin >> temp;
        s.push_back(temp);
    }

    // Display the size of the vector after adding values
    cout << "Size of the vector after adding some values: " << s.size() << "\n";

    // Display the values in the vector using a while loop
    i = 0;
    cout << "Vector Values after adding some values: ";
    while(i != s.size())
    {
        cout << s[i] << " ";
        i++;
    }
    cout << "\n";

    // Copying values from s to anotherVector
    vector<int> anotherVector = s;

    // Display the values in anotherVector using a while loop
    i = 0;
    cout << "Copying the vector to another vector & Vector Values displayed by another vector: ";
    while(i != anotherVector.size())
    {
        cout << anotherVector[i] << " ";
        i++;
    }

    return 0;
}
