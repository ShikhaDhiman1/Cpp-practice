#include <iostream>
using namespace std;

int *sort(int *arr, int n){ // insertion sort
    for(int i = 0; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return arr;
}


int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n;
    int mid;
    while(start <= end){
        mid = (start + end)/2;

        if(arr[mid] == key) return mid;

        else if(arr[mid] < key) start = mid + 1;

        else end = mid - 1;
    }
    return -1;
}

int main(){
    int n, key;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int *sortedArr = sort(arr, n);
    // for(int i = 0; i < n; i++){
    //     cout<<sortedArr[i]<<" ";
    // }
    // cout<<endl; 

    cout<<"Enter the element (key) to be searched : ";
    cin>>key;

    cout<<"The index of "<<key<<" is : "<<binarySearch(sortedArr, n, key)<<endl;

    return 0;
}