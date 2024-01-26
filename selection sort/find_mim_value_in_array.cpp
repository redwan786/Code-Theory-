#include<bits/stdc++.h>
using namespace std;

void findMin(int array[],int n){
    int min = array[0];
    int position = 0;
    for(int i=1; i<=n-1; i++){
        if(array[i]< min){
            min = array[i];
            position = i;
        }
    }
    cout << "min value : "<<min<<" at index "<< position;


}

int main(){
    cout << "Enter the number of array:";
    int n;
    cin >> n;
    int array[n];
    cout << "enter " << n << " elements: ";
    for(int i = 0 ; i < n; i++){
        cin >> array[i];
    }
    findMin(array,n);
    return 0;

}




