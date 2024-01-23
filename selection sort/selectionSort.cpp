#include<bits/stdc++.h>
using namespace std;

void selectionSort(int array[],int n)
{
    for(int i=0; i<n-1; i++ )
    {
        int min = array[i];
        int position = i;
        for(int j=i+1; j<=n-1; j++)
        {
            if(array[j]< min)
            {
                min = array[j];
                position = j;
            }
        }
        swap(array[i],array[position]);
        //cout << "min value : "<<min<<" at index "<< position;
    }
    cout << "Selection Sort : ";
    for(int p = 0 ; p < n; p++)
    {
        cout << array[p] << " ";
    }



}

int main()
{
    cout << "Enter the number of array: ";
    int n;
    cin >> n;
    int array[n];
    cout << "enter " << n << " elements: ";
    for(int i = 0 ; i < n; i++)
    {
        cin >> array[i];
    }
    selectionSort(array,n);
    return 0;

}

