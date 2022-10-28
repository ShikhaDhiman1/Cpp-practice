#include <iostream>
using namespace std;

class parent{
    public:
    void print(){
        cout<<"This is Parent Class.\n";
    }
    // virtual void print(){
    //     cout<<"This is Parent Class.\n";
    // }
};

class child : public parent{
    public:
    void print(){
        cout<<"This is Child class.\n";
    }
};

int main(){
    child ob;
    // parent *p = &ob;
    ob.print();
}