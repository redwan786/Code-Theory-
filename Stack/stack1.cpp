#include<bits/stdc++.h> // Include necessary headers

using namespace std; // Using the standard namespace

// Function to display contents of the stack
void display(stack<int> st)
{
    if(st.empty()) // Check if the stack is empty
    {
        cout << "From Other Function:- Stack is already empty...To show elements using other function comment comment some line."; // Display message if stack is empty
    }
    else
    {
        cout << "From Other Function:- Contents of the stack: "; // Display message if stack is not empty
        while (!st.empty()) // Loop until stack is empty
        {
            cout << st.top() << " "; // Display top element of stack
            st.pop(); // Remove top element of stack
        }
        cout << endl; // Move to next line
    }
}

int main()
{
    stack<int> st; // Create an empty stack to store integers
    cout << "How many values to insert in the stack: ";
    int num;
    cin >> num; // Read the number of values to insert into the stack
    cout << "Enter " << num << " values to insert in the stack: ";
    for(int i = 0; i < num; i++) // Loop to insert values into the stack
    {
        int temp;
        cin >> temp; // Read value from user
        st.push(temp); // Insert value into the stack
    }
    cout << "Size : " << st.size() << endl; // Display the size of the stack

    /*
    // Check if stack is empty
    if(st.empty())
    {
        cout << "Stack is already empty"; // Display message if stack is empty
    }
    else
    {
        cout << "From main function:- Contents of the stack: "; // Display message if stack is not empty
        while (!st.empty()) // Loop until stack is empty
        {
            cout << st.top() << " "; // Display top element of stack
            st.pop(); // Remove top element of stack
        }
        cout << endl; // Move to next line
    }

    */

    display(st); // Call the display function to show the contents of the stack

    return 0; // Return 0 to indicate successful completion
}
