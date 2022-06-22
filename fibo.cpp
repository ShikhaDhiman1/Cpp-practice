#include <iostream>
using namespace std;
// #1
// int main(){
//     int n;
//     cout<<"Enter the number upto which you want the fibonacci series : ";
//     cin>>n;
//     int fib[n];
//     for(int i=0;i<n;i++){
//         if(i==0 || i==1) fib[i]=i;
//         else{
//             fib[i]=fib[i-1]+fib[i-2];
//         }
//     }
//     cout<<fib[0];
//     for(int j=1;j<n;j++){
//         cout<<", "<<fib[j];
//     }
//     cout<<endl;
//     int ascii='%';
//     cout<<ascii;
//     return 0;
// }


//#2
// int fibo(int n){
//     if(n==0|n==1) return n;
//     else{
//         return fibo(n-1)+ fibo(n-2);
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the no. of terms : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<fibo(i)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//#3
void fibo(int n){
    int term1=0;
    int term2=1;
    for(int i=0;i<n;i++){
    cout<<term1<<" ";
    int nextterm=term1+term2;
    term1=term2;
    term2=nextterm;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the no. of terms : ";
    cin>>n;
    fibo(n);
    cout<<endl;
    return 0;
}