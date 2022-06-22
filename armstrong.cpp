#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,len,x;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=20;i++){
        //cout<<i<<endl;
        //cout<<(n/pow(10,i)==0)<<endl;
        x=pow(10,i);
        //cout<<x<<endl;
        //cout<<pow(10,1)<<endl;
        if(n%x==n) { len=i; break;}
    }
    // int i=1;
    // while(true){
    //     int x=pow(10,i);
    //     cout<<n%x<<endl;
    //     if(n%x==0) { len=i; break;}
    //     i++;
    // }
    cout<<"Size is : "<<len<<endl;
    int sum=0;
    int num=n;
    for(int i=1;i<=len;i++){
        x=num%10;
        num=num/10;
        sum=sum+pow(x,len);
    }
    cout<<sum<<endl;
    // int last,s=0;
    // while(n>0){
    //     last=n%10;
    //     s=s+pow(last,len);
    //     n=n/10;
    // }
    //if(s==n) cout<<n<<" is an armstrong number...\n";
    if(sum==n) cout<<n<<" is an armstrong number...\n";
    else cout<<n<<" is not an armstrong number...\n";
}