#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"\nEnter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // int cummSum[n];
    // cummSum[0] = 0;

    // // -1 4 3 2 1
    // //  0 1 2 3 4

    // for(int i = 1; i <= n; i++){
    //     cummSum[i] = cummSum[i - 1] + arr[i-1];
    // }
    // for(int i = 1; i <= n ; i++){
    //     cout<<cummSum[i]<<" ";
    // }
    // cout<<endl;
    // int maxSum = INT_MIN;
    // cout<<maxSum;

    // for(int i = 1; i <= n; i++){
    //     int sum = 0;
    //     for(int j = 0; j < i ; i++){
    //         sum = cummSum[i] - cummSum[j];
    //     }
    //     cout<<endl<<sum;
    //     maxSum = max(sum, maxSum);
    // } 
    // cout<<endl<<maxSum;

    int currSum[n];
    currSum[0] = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < 0) currSum[i] = 0;
        else currSum[i] = currSum[i - 1] + arr[i];
    }

    // for(int i = 0; i < n; i++){
    //     cout<<currSum[i]<<" ";
    // }

    int max1 = INT_MIN;
    for(int i = 0; i < n; i++){
        if(currSum[i] > max1) max1 = currSum[i];
    }

    cout<<"\nMaximum sum of a subarray of given array is : "<<max1<<endl;

    cout<<endl;

    // ---- OR ----------------------------------------------------------------------------
    int currSum1 = 0;
    int maxSum = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] < 0) currSum1 = 0;
        else currSum1 = currSum1 + arr[i];
        maxSum = max(currSum1, maxSum); 
    }
    cout<<maxSum<<endl;
    
    maxSum = INT_MIN;

    for(int i = 0; i < n; i++){
        int k = n;
        while(k >= i){
            int sum1 = 0;
            for(int j = i; j < k; j++){
                cout<<arr[j]<<" ";
                sum1 += arr[j];
            }
            //cout<<"      -> "<<sum1;
            maxSum = max(sum1, maxSum);
            k--;
            cout<<endl;
        }
        //cout<<endl;
    }
    cout<<"Maximum sum is : "<<maxSum<<endl;



    return 0;
}