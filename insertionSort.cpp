#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // for(int i = 1; i < n; i++){
    //     int key = arr[i];
    //     int j = i - 1;
    //     while(j >= 0 && arr[j] > key){
    //         arr[j+1] = arr[j];
    //         i--;
    //     }
    //     arr[j + 1] = key;
    // }

    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}