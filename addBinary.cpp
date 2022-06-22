#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter two binary numbers to be added : ";
    cin>>n1>>n2;
    
    cout<<"Sum of "<<n1<<" and "<<n2<<" is : ";

    int prevCarry=0;
    int ans=0;

    while(n1>0 && n2>0){
        if(n1%2==0 && n2%2==0){
            ans=ans*10+0;
            prevCarry=0;
        }
        else if(n1%2==0 && n2%2==1 | n1%2==1 && n2%2==0){
            ans=ans*10 + 1;
            prevCarry=0;
        }
        else{
            ans=ans*10+0;
            prevCarry=1;
        }
        n1/=10;
        n2/=10;
    }
    while(n1>0){
        if(prevCarry==1){
            if(n1%2==0){
                ans=ans*10 +1;
                prevCarry=0;
            }
            else if(n1%2==1){
                ans=ans*10 + 0;
                prevCarry=1;
            }
        }
        else if(prevCarry==0){
            ans=ans*10+ (n1%2);
        }
        n1/=10;
    }
    while(n2>0){
        if(prevCarry==1){
            if(n2%2==0){
                ans=ans*10 +1;
                prevCarry=0;
            }
            else if(n2%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
        }
        else if(prevCarry==0){
            ans=ans*10 + (n2%2);
        }
        n2/=10;
    }
    if(prevCarry==1){
        ans=ans*10+1;
    }
    cout<<ans<<endl;
    while(ans>0){
        cout<<ans%10;
        ans/=10;
    }

    return 0;
}