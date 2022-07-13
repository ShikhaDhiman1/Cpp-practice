// Program to calculate the maximum sum of a pair in the array.......
#include <iostream>
#include <climits>
using namespace std;

bool check(int k, int n1, int n2){
    if((n1 + n2) == k) return true;
    else return false ;
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

    int k;
    cout<<"Enter the Pair sum for which the array is to be checked : ";
    cin>>k;

// -----------------------------------------------------------------------------------------
    // CARTESIAN PRODUCT OF ARRAY TO ITSELF : 
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout<<arr[i]<<" "<<arr[j];
    //         cout<<endl;
    //     }
    // }

// ------------------------------------------------------------------------------------------
    //PAIR IN THE ARRAY HAVING MAXIMUM SUM : 
    // int maxSum = INT_MIN;
    // int sum;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         sum = 0;
    //         if(i != j){
    //             cout<<arr[i]<<" "<<arr[j];
    //             sum = arr[i] + arr[j];
    //             cout<<" ---> "<<sum<<endl;
    //             maxSum = max(maxSum, sum);
    //         }
    //     }
    // }

    //cout<<"\nMaximum Pair Sum is : "<<maxSum<<endl<<endl;

// -------------------------------------------------------------------------------------------

// PAIR HAVING SUM EQUAL TO GIVEN SUM 'k' : 

cout<<"\nPair(s) having sum equal to "<<k<<" is(are) : \n";
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(check(k, arr[i], arr[j])){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                //break;  // ------ to check for the first pair only--------
            }
        }
    }
    cout<<endl;

    return 0;
}