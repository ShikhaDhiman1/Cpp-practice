#include <iostream>
using namespace std;

void fibonacci(int n){
    int fibo[n];
    for(int i = 0; i < n; i++){
        if(i==0 | i==1){
            fibo[i] = i;
        }
        else{
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<fibo[i]<<" ";
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    fibonacci(n);
    // int *fibo = fibonacci(n);
    // for(int i = 0; i < n; i++){
    //     cout<<fibo[i]<<" ";
    // }
    // cout<<endl;
    return 0;
}