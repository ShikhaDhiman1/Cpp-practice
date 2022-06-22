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
    for(int j=1;j<n;j++){
        int key=arr[j];
        cout<<" Key : "<<key<<endl;
        int i=j-1;
        cout<<" i : "<<i<<endl;
        cout<<"arr[i] > key : "<<arr[i]<<" > "<<key<<" : "<<(arr[i]>key)<<endl;
        while(i>=0 && arr[i]>key){
            cout<<"arr[i+1](arr["<<i+1<<"]) = "<<arr[i+1]<<endl;
            cout<<"arr[i](arr["<<i<<"]) = "<<arr[i]<<endl;
            arr[i+1]=arr[i];
            cout<<"arr[i+1](arr["<<i+1<<"]) = "<<arr[i+1]<<endl;
            i=i-1;
            cout<<"i = "<<i<<endl;
        }
        arr[i+1]=key;
        cout<<" Key : "<<key<<endl;
    }
    cout<<"Sorted array is : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int j=1;j<n;j++){
        int key=arr[j];
        int i=j-1;
        while(i>=0 && arr[i]<key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}