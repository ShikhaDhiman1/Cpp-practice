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

    // int max = INT_MIN;
    // int min = INT_MAX;

    for(int i = 0; i < n; i++){
        int min = arr[i];
        int max = arr[i];
        cout<<"Minimum  and Maximum element from arr[0] to ";
        for(int j = 0; j <= i; j++){
            if(arr[j] < min) min = arr[j];
            if(arr[j] > max) max = arr[j];
        }
        cout<<"arr["<<i<<"] are : "<<min<<" and "<<max<<endl;
    }
    return 0;
}