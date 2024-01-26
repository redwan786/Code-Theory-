#include<bits/stdc++.h>
using namespace std;

void merge(int arrA[],int arrB[],int sizeA, int sizeB)
{

    int size_merge = sizeA + sizeB;
    int arr_merge[size_merge];

    arrA[sizeA] = 999999;
    arrB[sizeB] = 999999;


    for(int k = 0, i = 0, j = 0; k < size_merge; k++)
    {
        if(arrA[i] < arrB[j])
        {
            arr_merge[k] = arrA[i];
            i++;
        }
        else
        {
            arr_merge[k] = arrB[j];
            j++;

        }

    }

    // print the merge sorted array

    for(int i = 0; i < size_merge; i++)
    {
        cout << arr_merge[i] << " ";
    }


}
int main()
{
    cout << "***You have to input two sorted array***" << endl;
    int sizeA, sizeB;
    cout << "Enter 1st array size :";
    cin >> sizeA;
    cout << "Enter 2nd array size :";
    cin >> sizeB;

    int arrA[sizeA], arrB[sizeB];

    cout << "Enter " << sizeA << " elements of 1st array :";
    for(int i = 0; i < sizeA; i++)
    {
        cin >> arrA[i];
    }

    cout << "Enter " << sizeB << " elements of 2nd array :";
    for(int i = 0; i < sizeB; i++)
    {
        cin >> arrB[i];
    }

    merge(arrA,arrB,sizeA,sizeB);


    return 0;
}

