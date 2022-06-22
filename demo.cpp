#include <iostream>
#include<random>
using namespace std;

int main(){
    cout<<"Hello!!\nWelcome to C++ Programming....\n";
    string name,college,course;
    int roll;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your College name : ";
    cin>>college;
    cout<<"Enter your College roll no. : ";
    cin>>roll;
    cout<<"Enter your course : ";
    cin>>course;
    cout<<"************************************************************\n";
    cout<<"Your details are : \n";
    cout<<"Name -> "<<name<<"\n";
    cout<<"College -> "<<college<<"\n";
    cout<<"Course -> "<<course<<"\n";
    cout<<"College Roll No. -> "<<roll<<"\n";
    cout<<(rand()%105+5)<<endl;
    return 0;
}