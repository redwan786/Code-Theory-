#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "***You have to input two sorted array***" << endl;
    int sizeA, sizeB;
    cout << "Enter 1st array size :";
    cin >> sizeA;
    cout << "Enter 2nd array size :";
    cin >> sizeB;

    int arrA[sizeA], arrB[sizeB];

    cout << "Enter " << sizeA << "elements of 1st array :";
    for(int i = 0; i < sizeA; i++)
    {
        cin >> arrA[i];
    }

    cout << "Enter " << sizeB << "elements of 2nd array :";
    for(int i = 0; i < sizeB; i++)
    {
        cin >> arrB[i];
    }

    int sizeC = sizeA + sizeB;
    int arrC[sizeC];


    for(int i = 0, j = 0, k = 0; (i < sizeA || j < sizeB || k < sizeC); )
    {
        if(arrA[i] < arrB[j])
        {
            arrC[k] = arrA[i];
            i++;
            k++;
        }
        else
        {
            arrC[k] = arrB[j];
            j++;
            k++;
        }

    }

    for(int i = 0; i < sizeC; i++)
    {
        cout << arrC[i] << " ";
    }

    return 0;
}
