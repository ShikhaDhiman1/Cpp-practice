#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    //int arr = new int[n];
    int arr[n];
    cout<<"Enter the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    // Increasing Order ----->
    for(int j=1;j<n;j++){
        int key=arr[j];
        int i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
        //cout<<" Key : "<<key<<endl;
    }
    cout<<"\nSorted array is : \n";
    cout<<"\n--> In INCREASING order : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Decreasing Order ---->
    for(int j=1;j<n;j++){
        int key=arr[j];
        int i=j-1;
        while(i>=0 && arr[i]<key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
    cout<<"\n--> In DECREASING order : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}