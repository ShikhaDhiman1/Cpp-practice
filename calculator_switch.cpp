#include <iostream>
using namespace std;

int main(){
    cout<<int(12.3);
    cout<<"This is a simple calculator implemented using 'switch-case' statement!!\n";
    float a,b;
    cout<<"Enter the value of the two operands a and b : ";
    cin>>a>>b;
    char op;
    cout<<"Enter the operator you want to operate on the operands as -> (a) operator (b) : ";
    cin>>op;
    switch(op){
        case '+': cout<<a<<" + "<<b<<" = "<<(a+b);break;
        case '-': cout<<a<<" - "<<b<<" = "<<(a-b);break;
        case '/': cout<<a<<" / "<<b<<" = "<<(a/b);break;
        case '*': cout<<a<<" * "<<b<<" = "<<(a*b);break;
        case '%': cout<<a<<" % "<<b<<" = "<<((int)a%(int)b);break;
        default:cout<<"Wrong operator!!\n";break;
    }
    int i=0;
    i=i++ - --i + ++i - i-- +1;
    cout<<endl<<i;
    cout<<(4<<2)<<" "<<(4<<1)<<" "<<(4>>2)<<" "<<(4>>1)<<" "<<(1000>>1)<<endl;
    //left shift operator(<<) => a<<n = a*2^n
    //right shift operator(>>) => a>>n = a/2^n
    // example : 4=100
    // 4<<1=8 (=4*2^1 = 1000)
    // 4>>1=2 (=4/2^1 = 010)
    int n;cin>>n;
    int m=n%2==0?n/2 : n%2 ;
    cout<<m;
    return 0;
}