#include <bits/stdc++.h>
using namespace std;

int octtodec(int n){
    int x=1;
    int sum=0;
    while(n>0){
        int last=n%10;
        n=n/10;
        sum+=last*x;
        x*=8;
    }
    return sum;
}

void dectooct(int n){
    string s="";
    while(n>0){
        int x=n%8;
        n/=8;
        s+= to_string(x);
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return;
}

int main(){
    int n;
    int op;
    cout<<"Choose from :\n1. Octal to Decimal\n2. Decimal to Octal\n";
    cout<<"Enter your choice : ";
    cin>>op;
    cout<<"Enter the number : ";
    cin>>n;
    switch(op){
        case 1: cout<<n<<" in decimal : "<<octtodec(n)<<endl;break;
        case 2: dectooct(n);break;
        default : cout<<"Wrong choice!!!\n";
    }
    // cout<<int('A')<<endl;
    // cout<<char(65)<<endl;
    // cout<<int('0')<<endl;
    // cout<<48*256<<endl;
    return 0;
}