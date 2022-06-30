#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"\nFollowing are the Arithmetic subarrays int the given array : \n";

    int prevDiff = arr[0] - arr[1];
    cout<<arr[0]<<" ";
    for(int i = 1; i < n; i++){
        if(prevDiff == (arr[i-1] - arr[i])){
            
            prevDiff == arr[i-1] - arr[i];
            cout<<" "<<arr[i]<<" ";
        }
        else{
            
            cout<<endl;
            prevDiff = arr[i-1] - arr[i];
            cout<<arr[i-1]<<" "<<arr[i];
        }
    }
    cout<<endl<<endl;
    return 0;
}