#include <iostream>
using namespace std;

int *selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array : \n";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int *sortedArray = selectionSort(arr, n);
    cout<<"Sorted array is : \n";
    for(int i = 0; i < n; i++){
        cout<<sortedArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}