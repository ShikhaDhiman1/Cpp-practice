#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of consecutive days : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the number of visitors for each day : \n";
    for(int i = 0; i < n; i++){
        cout<<"Day "<<i+1<<" : ";
        cin>>arr[i];
    }

    int max = INT_MIN;
    int count = 0;
    //int record;

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            count++;
            cout<<max<<endl;
            //record = i;
        }
    }
    //cout<<record<<"th day is the record breaking day.\n";
    cout<<"Total record breaking days having maximum number of visitors than previous days is/are : "<<count<<endl;
    cout<<"Following are/is the record breaking day(s) : \n";
    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            cout<<"Day "<<i<<endl;
        }
    }
    cout<<endl;
    return 0;
}