#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string str1;
    string str2;

    cout<<"\nEnter String 1 : ";
    cin>>str1;
    cout<<"\nEnter String 2 : ";
    cin>>str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    cout<<"\nThe Extra character is : ";

    if(str1.length() > str2.length()){
        for(int i = 0; i < str1.length(); i++){
            if(str1[i] != str2[i]){
                cout<<str1[i]<<endl;
                break;
            }
        }
    }
    else{
        for(int i = 0; i < str2.length(); i++){
            if(str1[i] != str2[i]){
                cout<<str2[i]<<endl;
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}