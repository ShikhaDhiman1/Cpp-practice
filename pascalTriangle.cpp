#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int fac =1;
    for(int i=1;i<=n;i++){ fac*=i; }
    return fac;
}

int nCr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}