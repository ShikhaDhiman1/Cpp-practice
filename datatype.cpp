#include <iostream>
using namespace std;

int main(){
    int a; // declaration
    a=10; // initialization
    cout<<"size of integer "<<sizeof(a)<<" bytes = "<<8*sizeof(a)<<" bits"<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<" bytes = "<<8*sizeof(b)<<" bits"<<endl;

    bool c;
    cout<<"size of boolean "<<sizeof(c)<<" byte = "<<8*sizeof(c)<<" bits"<<endl;

    char d;
    cout<<"size of character "<<sizeof(d)<<" byte = "<<8*sizeof(d)<<" bits"<<endl;

    unsigned int usi;
    cout<<"size of unsigned integer "<<sizeof(usi)<<" bytes = "<<8*sizeof(usi)<<" bits"<<endl;

    signed int si;
    cout<<"size of signed integer "<<sizeof(si)<<" bytes = "<<8*sizeof(si)<<" bits"<<endl;

    long int li;
    cout<<"size of long integer "<<sizeof(li)<<" bytes = "<<8*sizeof(li)<<" bits"<<endl;

    short int shi;
    cout<<"size of short integer "<<sizeof(shi)<<" bytes = "<<8*sizeof(shi)<<" bits"<<endl;

    long long int lli;
    cout<<"size of long long integer "<<sizeof(lli)<<" bytes = "<<8*sizeof(lli)<<" bits"<<endl;

    return 0;
}