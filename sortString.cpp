#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<<"\nEnter the string : ";
    cin>>str;

    cout<<"\nSorted string in descending order is : ";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl<<endl;

    cout<<"\nSorted string in descending order is : ";
    sort(str.begin(), str.end());
    cout<<str<<endl<<endl;
    return 0;
}