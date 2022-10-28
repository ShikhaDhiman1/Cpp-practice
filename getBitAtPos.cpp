#include <iostream>
#include "numberConversion.h"
using namespace std;

int getBit(int n, int pos){
    // cout<<s<<endl;
    // cout<<(1<<pos)<<endl;
    // string position = dectobin(1 << pos);
    // cout<<stoi(position)<<endl;
    // return (stoi(s) & stoi(position));
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos){
    return (n | (1 << pos));
}

int clearBit(int n, int pos){
    int mask = ~(1 << pos);
    return (n & mask);
}

int main(){
    int num, pos;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the position : ";
    cin>>pos;
    // cout<<getBit(dectobin(num), pos);
    cout<<getBit(num, pos);
    cout<<endl;
    cout<<setBit(num, pos);
    cout<<endl;
    cout<<clearBit(num, pos);
    cout<<endl;
    return 0;
}