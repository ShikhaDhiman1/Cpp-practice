//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     cout<<"following are the prime numbers till "<<n<<" : \n";
//     for(int i=2;i<=n;i++){
//         if(i==2) cout<<i;
//         else {
//             bool flag=false;
//             for(int j=2;j<i;j++){
//                 if(i%j==0) flag= true;
//             }
//             if(!flag) cout<<", "<<i;
//         }
//     }
//     return 0;
// }

bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n1,n2;
    cout<<"Enter the range : \n";
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(isprime(i)) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}