#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

void recursive(int j)
{
    if (j < 5)
    {

        cout << j << " ";
        recursive(++j);
    }
}




int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout << i <<" ";
    }
    cout << endl;
    int j = 0;
    recursive(j);

    return 0;
}
