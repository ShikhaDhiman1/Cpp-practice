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
     
    int sum;
    cout<<"Enter the sum you want : ";
    cin>>sum;

    //int k = n;
    cout<<"\nFollowing are the subarrays in the given array : \n";
    for(int i = 0; i < n; i++){
        int k = n;
        while(k >= i){
            int sum1 = 0;
            for(int j = i; j < k; j++){
                cout<<arr[j]<<" ";
                sum1 += arr[j];
            }
            if(sum1 == sum){
                cout<<"--> The summation of this subarray is "<<sum<<" with starting index : "<<i<<" and ending index : "<<k;
            }
            k--;
            cout<<endl;
        }
        //cout<<endl;
    }

    // int start = 0;
    // int end = 0;

    // while(start < n && end < n){

    // }
    
    return 0;
}