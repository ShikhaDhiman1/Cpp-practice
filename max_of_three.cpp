#include <iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cout<<"Enter the three numbers : ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c) max=a;
        else max=c;
    }
    else{
        if(b>c) max=b;
        else max=c;
    }
    cout<<"Maximum number is : "<<max<<endl;
    return 0;
}