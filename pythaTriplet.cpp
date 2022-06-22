#include <iostream>
using namespace std;

// int max(int a,int b,int c){
//     int large;
//     if(a>b){
//         if(b>c) large=a;
//         else large =c;
//     }
//     else{
//         if(a>c) large = b;
//         else large = c;
//     }
//     return large;
// }

int main(){
    int a,b,c;
    int x,y,z;
    cout<<"Enter the three sides to check for pythagoren triplet : ";
    cin>>a>>b>>c;
    //x=max(a,b,c);
    if(a>b){
        if(b>c) {x=a;y=b;z=c;}
        else {x=c;y=a;z=b;}
    }
    else{
        if(a>c){x=b;y=a;z=c;}
        else{x=c;y=a;z=b;}
    }
    int t= (y*y)+(z*z);
    if(t==(x*x)) cout<<"Given sides are pythagoren triplets.\n";
    else cout<<"Given sides are not pythagoren triplets.\n";
    return 0;
}