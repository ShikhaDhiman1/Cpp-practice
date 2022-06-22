#include <bits/stdc++.h>
using namespace std;

int pow(int n,int p){
    int power=1;
    for(int i=0;i<p;i++){
        power*=n;
    }
    return power;
}

int main(){
    int n,x,n1=0;
    cout<<"Enter value : ";
    cin>>n;
    // int num=n;
    // int len=0;
    // while(num>0){
    //     x=num%10;
    //     num=abs(num/10);
    //     len++;
    // }
    // cout<<"size is : "<<len<<endl;
    // for(int i=len-1;i>=0;i--){
    //     x=pow(10,i);
    //     if(i==2) x=100;
    //     num=(n%10)*x;
    //     n=n/10;
    //     n1+=num;
    // }
    // cout<<n1;
    int last,rev=0;
    while(n>0){
        last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    cout<<rev;
    return 0;
}