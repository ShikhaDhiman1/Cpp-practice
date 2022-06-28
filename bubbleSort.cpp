#include <iostream>
using namespace std;

void swap(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
    return;
}

void bubbleSort(int *arr, int n){
    while(n > 0){
        int i = 0;
        while( i < n ){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i + 1]);
            //cout<<arr[i]<<" "<<arr[j]<<" | ";
            // int temp = arr[i];
            // arr[i] = arr[i+1];
            // arr[i+1] = temp;
            //cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            i++;
        }
    // cout<<n<<endl;
        n--;
    }
    // ---- OR -----
    // int j = 1;
    // while(j < n){
    //     for(int i = 0; i < n - j; i++){
    //         if(arr[i] > arr[i+1]){
    //             swap(arr[i], arr[i+1]);
    //         }
    //     }
    //     j++;
    // }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //int * sortedArray = 
    bubbleSort(arr, n);
    cout<<"Sorted array is : \n";

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// 1 2 0 4 7
// 1 0 2 4 7
// 0 1 2 4 7
