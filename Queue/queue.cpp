#include <bits/stdc++.h> // Including the entire standard library
using namespace std;

int main()
{
    queue<int> q; // Creating an empty queue of integers
    q.push(10);   // Pushing 10 onto the queue
    q.push(20);   // Pushing 20 onto the queue
    q.push(30);   // Pushing 30 onto the queue
    q.push(40);   // Pushing 40 onto the queue

    cout << "Size :" << q.size() << endl; // Outputting the size of the queue (4)

    if (q.empty()) // Check if the queue is empty
    {
        cout << "Queue is empty"; // Display message if queue is empty
    }
    else
    {

        // Displaying the first and last elements of the queue
        cout << "First element: " << q.front() << endl; // Display the first element of the queue
        cout << "Last element: " << q.back()<< endl; // Display the last element of the queue

        while (!q.empty()) // Loop until queue is empty
        {
            int val = q.front(); // Get the front element of the queue
            cout << val << endl; // Output the front element
            q.pop(); // Remove the front element from the queue
        }
    }

    return 0;
}
