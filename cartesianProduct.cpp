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
    int count = 0;
    //int sum ;
    for(int i = 0; i < n; i++){
        int k = 0;
        for(int j = 0; j < n; j++){
            //sum =  INT_MIN;
            cout<<arr[i]<<" "<<arr[k];
            cout<<endl;
            //sum = max(sum, arr[i] + arr[k]);
            k++;
            count++;
        }
    }
    //cout<<endl<<sum;
    cout<<"Total elements in the cartesian Product are : "<<count<<endl;
    cout<<endl;
    return 0;
}