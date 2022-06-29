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

    int arr1[n];
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // #1
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] == arr[j] && i != j){
                arr1[i] = j;
                break;
            }
            else{
                arr1[i] = -1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"Following are the repeated elements in the array : \n";
    for(int i = 0; i < n; i++){
        if(arr1[i] != -1){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
     
    // #2
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j =  i+1; j < n; j++){
            if(arr[i] == arr[j]){
                ans = min(ans, i);
            }
            //cout<<"min : "<<ans<<endl;
        }
    }
    cout<<"\nElement "<<arr[ans]<<" is a repeated element at the smallest index : ";
    cout<<ans<<endl;
     
    // #3
    int j;
    for(int i = 0; i < n; i++){
        int flag = 0;
        cout<<"\n\nElement "<<arr[i]<<" occurs at index(s) : ";
        for( j = i; j < n; j++){
            if(arr[i] == arr[j] && i != j){
                cout<<j<<" ";
                flag = 1;
            }
        }
        if(!flag) cout<<"No Repetition!";
        cout<<endl;
    }

    return 0;
}