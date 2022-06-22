#include <bits/stdc++.h>
// ----OR-----
//#include <iostream>
//#include <cmath>  //-------for sqrt---------
using namespace std;

// int main(){
//     int n;
//     int flag=0;
//     cout<<"Enter : ";
//     cin>>n;
//     // for(int i=2;i<n;i++){
//     //     if(n%i==0) flag=1;
//     // }
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i==0) flag=1;
//     }
//     if(flag) cout<<n<<" is not a prime number.\n";
//     else cout<<n<<" is a prime number.\n";

//     // int div=2;
//     // while (div<n){
//     //     if(n%div==0){cout<<n<<" is not a prime number.\n"; break;}
//     //     else div++;
//     // }
//     return 0;
// }

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
            break;
        }
        else return true;
    }
}

int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;
    if(isprime(n)) cout<<n<<" is a prime number.\n ";
    else if(!isprime(n)) cout<<n<<" is not a prime number.\n";
    return 0;
}