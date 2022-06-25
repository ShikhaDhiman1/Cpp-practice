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

    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int arr1[j-i+1];
    //         int index = 0;
    //         for(int k = i; k <= j; j++){
    //             arr1[index] = arr[k];
    //             index++; 
    //         }
    //         bool flag = 0;
    //         for(int k = 0; k < index; k++){
    //             int diff = abs(arr1[k] - arr1[k - 1]);
    //             if(abs(arr1[k] - arr1[k+1]) == diff) flag = 1;
    //             else {flag = 0; break;} 
    //         }
    //         if(flag){
    //             for(int k = 0; k < index; k++){
    //                 cout<<arr1[k]<<" ";
    //             }
    //             cout<<endl;
    //         }
    //     }
    // }

    int prevDiff = arr[0] - arr[1];
    int ans = 2;
    int currArithArrLen = 2;

    for(int j = 2; j < n; j++){
        if(prevDiff == arr[j] - arr[j-1]){
            currArithArrLen++;
        }
        else{
            prevDiff = arr[j] - arr[j-1];
            currArithArrLen = 2;
        }
        ans = max(ans, currArithArrLen);
    }
    cout<<"Maximum arithmetic Subarray length is : "<<ans<<endl;

    return 0;
}