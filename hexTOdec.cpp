#include <bits/stdc++.h>
using namespace std;

int hextodec(string n){
    int x = 1;
    int sum = 0;
    int l = n.size();
    // while(n>0){
    //     int last=n%10;
    //     n/=10;
    //     sum+=int(last)*x;
    //     x*=16;
    // }
    for(int i=l-1; i >= 0; i--) {
        if (n[i] >= '0' && n[i] <= '9')
           sum += (x*(n[i] - '0')); 
        else sum += x * (int(n[i]) - 55);
        x *= 16;
    }
    return sum;
}

void decToHex(int n){
    string s="";
    while(n>0) {
        int x = n%16;
        n /= 16;
        if(x>=0 && x<=9){
            s+=to_string(x);
        }
        else if(x>=10 && x<=15){
            s+=char(x+55);
        }
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return;
}

int main(){
    string n;
    int op;
    cout<<"Choose from :\n1. Hexadecimal to Decimal\n2. Decimal to Hexadecimal\n";
    cout<<"Enter your choice : ";
    cin>>op;
    cout<<"Enter the number : ";
    cin>>n;
    switch(op){
        case 1: cout<<n<<" in decimal : "<<hextodec(n)<<endl;break;
        case 2: decToHex(stoi(n));break;
        default : cout<<"Wrong choice!!!\n";
    }
    return 0;
}