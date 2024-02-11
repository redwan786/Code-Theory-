#include<bits/stdc++.h> // Including the entire standard library
using namespace std;

int main()
{
    stack<int>st; // Creating an empty stack of integers
    st.push(10); // Pushing 10 onto the stack
    st.push(20); // Pushing 20 onto the stack
    st.push(30); // Pushing 30 onto the stack
    st.push(40); // Pushing 40 onto the stack

    cout << "Size :" << st.size()<< endl; // Outputting the size of the stack (4)

    if(st.empty()) // Check if the stack is empty
    {
        cout << "Stack is  empty"; // Display message if stack is empty
    }
    st.
    else
    {
        while(!st.empty()) // Loop until stack is empty
        {
            int val = st.top(); // Putting the top element of the stack
            cout << val << endl; // Outputting the top element
            st.pop(); // Removing the top element from the stack
        }
    }
}


