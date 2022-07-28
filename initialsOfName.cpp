#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter the string : \n";
    getline(cin, str);

    cout<<char(toupper(str[0]));
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ' ') cout<<", "<<char(toupper(str[i+1]));
        i++;
    }
    cout<<endl;
    return 0;
}