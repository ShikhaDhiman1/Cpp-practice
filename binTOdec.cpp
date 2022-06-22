#include <bits/stdc++.h>
using namespace std;

int pow(int a,int p){
    int power=1;
    for(int i=0;i<p;i++){
        power*=a;
    }
    return power;
}

int bintodec(int n){
    int size=0;
    int x;
    int sum=0;
    int n1=n;
    while(n1>0){
        n1=n1/10;
        size++;
    }
    for(int i=0;i<size;i++){
        x=n%10;
        n=n/10;
        sum+=x*pow(2,i);
    }
    return sum;
}

void dectobin(int n){
    string s = "";
    cout<<"In binary : ";
    while(n>0){
        int x=n%2;
        n=n/2;
        s+=to_string(x);
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return;
}

// int bintodec(int n){
//     int x=1;
//     int sum=0;
//     while(n>0){
//         int last=n%10;
//         n=n/10;
//         sum+=x*last;
//         x*=2;
//     }
//     return sum;
// }

int main(){
    int n;
    int op;
    cout<<"Choose from :\n1. Binary to Decimal\n2. Decimal to Binary\n";
    cout<<"Enter your choice : ";
    cin>>op;
    cout<<"Enter the  number : ";
    cin>>n;
    switch(op){
        case 1: cout<<"In decimal : "<<bintodec(n)<<endl;break;
        case 2: dectobin(n);break;
        default : cout<<"Wrong choice!!!\n";
    }
    return 0;
}