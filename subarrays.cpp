#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

/* APPROACH FOR SUBARRAYS IS : 
   1. Iterate from i = 0 to i = n - 1;
   2.     Iterate from j = i to j = n - 1;
   3.         Iterate from k = i to k = j{
   4.             Output Array[i...j];
   5.             Output Sum from Array[i...j];
   6.         }
*/
void subarrays(int arr[], int n){
    int i = 0;
    while(i<n){
        int j = i;
        while(j<n){
            int k = i;
            int sum = 0;
            cout<<"Subarray is : ";
            while(k<=j){
            cout<<arr[k]<<" ";
            sum += arr[k];
            k++;}
            cout<<endl<<"Sum of above subarray is : "<<sum<<endl;
            cout<<endl;
            j++;
        }
        i++;
    }

    //---- OR -------
    /*for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
                sum += arr[k];
            }
            cout<<endl;
            cout<<"Sum : "<<sum;
            cout<<endl;
        }
        cout<<endl;
    }*/

    return;
}

int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;

    cout<<"Enter the array : ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Total number of subarrays in an array of "<<n<<" size are : "<<((factorial(n) / (factorial(n-2) * factorial(2))) + n)<<endl;

    subarrays(arr, n);
    //noOfSubarray(arr, n);
    return 0;
}