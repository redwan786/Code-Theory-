#include<bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int arrSize)
{
    int key;

    //************ INSERTION SORT CODE *********************

    for(int i = 1; i <= arrSize; i++) //instead of "i <= arrSize-2" ,we have to put "i <= arrSize"
    {
        key = array[i];
        int j = i - 1;

        while( (j >= 0) && (array[j] > key) )
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }

    // Print Sorted Array

    cout << endl << endl << "Sorted Array : " << endl;
    for(int i = 0; i < arrSize; i++)
    {
        cout << array[i] << ", ";
    }
}

int main()
{
    int arrSize;
    cout << "Enter the size of Array : ";
    cin >> arrSize;

    int array[arrSize];
    cout << "Enter "<< arrSize << " elements of the Array : ";
    for(int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }

    insertionSort(array, arrSize);

    return 0;
}
