#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"\nEnter the number to be checked for duck number : ";
    cin>>str;

    bool flag = false;

    int i = 1;
    while(str[i] != '\0'){
        if(str[0] == '0') {
            flag = false;
            break;
        }
        if(str[i] == '0'){
            if(str[i-1] == '0'){
                flag = false;
            }
            else flag = true;
        }
        i++;
    }

    if(flag) cout<<endl<<str<<" is a duck number.\n\n";
    else cout<<endl<<str<<" is not a duck number.\n\n";
    return 0;
}