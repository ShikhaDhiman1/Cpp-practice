//PROGRAM TO CHECK IF A STRING IS AN INTEGER OR NOT....Ex, 112 is an INTEGER while 112.7 is a STRING.......

#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter the input : ";
    cin>>str;

    int i;
    for(i = 0; i < str.size(); i++){
        if(!(str[i] >= '0' && str[i] <= '9')){
            cout<<"\nIt is a STRING!!!\n\n";
            break;
        }
    }
    if(i == str.size()) cout<<"\nIt is an INTEGER!!!\n\n";

    return 0;
}