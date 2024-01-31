#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declare a vector to store integers
    vector<int> s;

    // Ask the user for the number of values to input
    cout << "How many values you want to keep:";
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
    cout << "Size of vector: " << s.size();
    cout << "\n";

    // Display the values in the vector using a while loop
    int i = 0;
    while(i != s.size())
    {
        cout << s[i] << " ";
        i++;
    }

    // Copying values from s to anotherVector
    //vector<int> anotherVector = s;

    // Add more values to anotherVector
    int numOfValue;
    cout << "\nEnterhow many values do you add: ";
    cin >> numOfValue;
    cout << "Enter "<<numOfValue<<" values: ";

    for (int j = 0; j < numOfValue; j++)
    {
        int temp;
        cin >> temp;
        s.push_back(temp);
    }

   // Display the values in the vector using a while loop
    i = 0;
    while(i != s.size())
    {
        cout << s[i] << " ";
        i++;
    }

    return 0;
}
