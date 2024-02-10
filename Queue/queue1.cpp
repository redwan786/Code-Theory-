#include <bits/stdc++.h> // Include necessary headers

using namespace std; // Using the standard namespace

// Function to display contents of the queue
void display(queue<int> q)
{
    if(q.empty()) // Check if the queue is empty
    {
        cout << "From Other Function: Queue is already empty... To show elements using other function, uncomment some lines."; // Display message if queue is empty
    }
    else
    {
        cout << "From Other Function: Contents of the queue: "; // Display message if queue is not empty
        while (!q.empty()) // Loop until queue is empty
        {
            cout << q.front() << " "; // Display front element of queue
            q.pop(); // Remove front element of queue
        }
        cout << endl; // Move to next line
    }
}

int main()
{
    queue<int> q; // Create an empty queue to store integers
    cout << "How many values to insert in the queue: ";
    int num;
    cin >> num; // Read the number of values to insert into the queue
    cout << "Enter " << num << " values to insert in the queue: ";
    for(int i = 0; i < num; i++) // Loop to insert values into the queue
    {
        int temp;
        cin >> temp; // Read value from user
        q.push(temp); // Insert value into the queue
    }
    cout << "Size : " << q.size() << endl; // Display the size of the queue

    /*
    // Check if queue is empty
    if(q.empty())
    {
        cout << "Queue is already empty"; // Display message if queue is empty
    }
    else
    {
        cout << "From main function: Contents of the queue: "; // Display message if queue is not empty
        while (!q.empty()) // Loop until queue is empty
        {
            cout << q.front() << " "; // Display front element of queue
            q.pop(); // Remove front element of queue
        }
        cout << endl; // Move to next line
    }
    */

    display(q); // Call the display function to show the contents of the queue

    return 0; // Return 0 to indicate successful completion
}
