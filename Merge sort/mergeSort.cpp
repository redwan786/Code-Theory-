
#include<bits/stdc++.h>
using namespace std;



//*************  merge  *****************

void merge(int low,int mid,int hi,int arrA[])
{
    int sizeL = mid +1;
    int sizeR = hi - mid;

    int arr_left[sizeL], arr_right[sizeR];

    for(int i = 0; i <= sizeL; i++)
    {
        arr_left[i] = arrA[i];
    }
    for(int j = 0; j <= sizeR; j++)
    {
        arr_right[j] = arrA[mid + 1 + j];
    }
    arr_left[sizeL] = 999999;
    arr_right[sizeR] = 999999;

    for(int k = low, i = 0, j = 0; k <= hi; k++)
    {
        if(arr_left[i] < arr_right[j])
        {
            arrA[k] = arr_left[i];
            i++;
        }
        else
        {
            arrA[k] = arr_right[j];
            j++;
        }
    }

}



//*********** merge sort *************

void mergeSort(int low, int hi, int arrA[])
{
    if(low < hi)
    {
        int mid = ((low + hi)/2);
        mergeSort(low, mid,arrA);
        mergeSort(mid +1, hi, arrA);
        merge(low, mid, hi, arrA);

    }
}




//************ main ***************

int main()
{
    cout << "***You have to input an array***" << endl;
    int sizeA;
    cout << "Enter the array size :";
    cin >> sizeA;


    int arrA[sizeA];

    cout << "Enter " << sizeA << " elements of 1st array :";
    for(int i = 0; i < sizeA; i++)
    {
        cin >> arrA[i];
    }

    int low = 0, hi = sizeA -1;

    mergeSort(low, hi, arrA);



    // print the merge sorted array

    for(int i = 0; i < sizeA; i++)
    {
        cout << arrA[i] << " ";
    }


    return 0;
}

