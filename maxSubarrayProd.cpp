#include <iostream>
#include <climits>
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
    int maxProd = INT_MIN;
    for(int i = 0; i < n; i++){
        int k = n;
        while(k >= i){
            int prod = 1;
            for(int j = i; j < k; j++){
                //cout<<arr[j]<<" ";
                prod *= arr[j];
            }
            k--;
            //cout<<endl;
            maxProd = max(maxProd, prod);
        }
        //cout<<endl;
    }
    cout<<"\nMaximum Product is : "<<maxProd<<endl;
    return 0;
}