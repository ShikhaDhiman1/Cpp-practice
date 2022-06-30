#include <iostream>
using namespace std;

short int  *sort(short int arr[], short int n){
    short int num = n;
    while(n > 0){
        for(int i = 0; i < n-1; i++){
            //cout<<arr[i]<<" "<<arr[i+1]<<" | ";
            if(arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            //cout<<arr[i]<<" "<<arr[i+1]<<endl;
        }
        n--;
    }
    // for(int i = 0; i < num; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    return arr;
}

int main(){
    short int n;
    short int  m;

    cout<<"Enter the size of the two arrays : ";
    cin>>n>>m;

    short int num1[n];
    short int  num2[m];
    short int mergeArr[n + m];

    cout<<"Enter the array : \n";
    cout<<"Array 1 : ";
    for(int i = 0; i < n; i++){
        cin>>num1[i];
    }
    cout<<"Array 2 : ";
    for(int j = 0; j < m; j++){
        cin>>num2[j];
    }

    short int *sortNum1 = sort(num1, n);
    short int *sortNum2 = sort(num2, m);
    for(int i = 0; i < n; i++){
        mergeArr[i] = sortNum1[i];
    }
    for(int i = n; i < n + m; i++){
        mergeArr[i] = sortNum2[i - n];
    }
    // for(int i = 0; i < n + m; i++){
    //     cout<<mergeArr[i]<<" ";
    // }
    cout<<endl;
    short int *arr = sort(mergeArr, n + m);
    // for(int i = 0; i < n+m; i++){
    //     cout<<arr[i]<<" ";
    // }

    float median;

    if((n + m) % 2 == 0){
        median = (((float)(n + m) / 2) + (((float)(n + m) / 2) + 1)) / 2;
    }
    else{
        median = arr[(n + m) / 2];
    }
    cout<<"Median is : "<<median<<endl;
    return 0;
}