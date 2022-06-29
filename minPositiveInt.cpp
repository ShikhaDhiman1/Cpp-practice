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

    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
    }

    //cout<<max<<endl<<endl;

    int arr2[max];
    
    for(int i = 0; i < max; i++){
        arr2[i] = 0;
    }

    bool flag = false;

    for(int i = 0; i < max; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                //cout<<arr[j]<<" | "<<i<<endl;
                arr2[i] = 1;
            }
        }
    }
    cout<<endl;
    for(int i = 0; i < max; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Positive integers not present are : ";
    for(int i = 0; i < n; i++){
        if(!arr2[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl<<endl;
    cout<<"Smallest positive integer not present is (,i.e., first positive missing number ) : ";
    for(int i = 0; i < n; i++){
        if(!arr2[i]){
            cout<<i<<endl<<endl;
            break;
        }
    }
    // ------- OR -------
    // bool b[n];
    // for(int i = 0; i < n; i++){
    //     b[i] = false;
    // }

    // for(int i = 0; i < n; i++){
    //     if(arr[i] >= 0){
    //         b[arr[i]] = true;
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     if(!b[i]){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }

    return 0;
}