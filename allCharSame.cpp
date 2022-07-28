// PROGRAM TO CHECK IF ALL THE CHARACTERS IN A STRING ARE SAME.....

#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter the String : ";
    cin>>str;

    int i = 0;
    char ch = str[0];
    while(str[i] != '\0'){
        if(str[i] != ch){
            cout<<"\nNO!!!\n\n";
            break;
        }
        i++;
    }
    if(i == str.length()){
        cout<<"\nYES...\n\n";
    }
    return 0;
}