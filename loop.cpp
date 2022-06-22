#include <iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // while(n>0){
    //     cout<<"Enter value : ";
    //     cin>>n;
    // }
    // do{
    //     cout<<"Enter value : ";
    //     cin>>n;
    // }while(n>0);

    int pocketmoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0) continue;
        if(pocketmoney==0) break;
        cout<<"This is odd date!!\nYou can go out today\nAnd pocketmoney left is = "<<pocketmoney<<endl;
        pocketmoney=pocketmoney-300;
    }

    for(int i=1;i<=100;i++){
        if(i%3!=0) continue;
        cout<<i<<" ";
    }
    cout<<endl;
    int n;
    cin>>n;
    int i;
    // bool flag=false;
    for(i=2;i<n;i++){
        if(n%i==0){ // flag=false;
            cout<<"NOT Prime!!\n"; break;}
        // else flag=true;    
    }
    if(i==n){cout<<"Prime!!\n";}
    //--OR---
    // if(flag){cout<<"Prime!!\n";}
    
    int a,b,j;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0) break;
        }
        if(j==i) cout<<i<<" ";
    }

    char l;
    cout<<"Choices are :->\nA -> English\nB -> Hindi\nC -> Spanish\nD -> Italian\nE -> French\n";
    cout<<"Enter your choice : ";
    cin>>l;
    switch(l){
        case 'A':cout<<"HELLO!!\n"; break;
        case 'B':cout<<"NAMASTE!!\n";break;
        case 'C':cout<<"HOLA!\n";break;
        case 'D':cout<<"CIAO!!\n";break;
        case 'E':cout<<"BONJOUR!!\n";break;
        default : cout<<"Wrong Choice!!!\n";
    }

    return 0;
}