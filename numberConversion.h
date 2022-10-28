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

string dectobin(int n){
    string s = "";
    // cout<<"In binary : ";
    while(n>0){
        int x=n%2;
        n=n/2;
        s+=to_string(x);
    }
    // for(int i=s.length()-1;i>=0;i--){
    //     cout<<s[i];
    // }
    // cout<<endl;
    return s;
}

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
        if(n[i] != 'x'){
        if (n[i] >= '0' && n[i] <= '9')
           sum += (x*(n[i] - '0')); 
        else sum += x * (int(toupper(n[i])) - 55);
        x *= 16;
        }
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

void decToOct(int n){
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