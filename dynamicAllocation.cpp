#include <iostream>
using namespace std;

int main(){
    int a = 10; // static memory allocation in stack
    cout<<"a : "<<a<<endl<<endl;

    int *p = new int();
    *p = 100;
    cout<<"p : "<<p<<endl<<endl;
    cout<<"value at p : "<<*p<<endl<<endl;

    delete(p);
    cout<<"Value of p after deallocation : ";
    cout<<*p<<endl;

    p = new int[4];
    for(int i = 0; i < 4; i++){
        cin>>p[i];
    }

    for(int i = 0; i < 4; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;

    delete[] p;
    cout<<"Value of p[1] after deallocation of p : ";
    cout<<p[1]<<endl;
    p = NULL;
    cout<<"Value of p[1] after deleting p from stack as well : ";
    cout<<p[1]<<endl;
    return 0;

}