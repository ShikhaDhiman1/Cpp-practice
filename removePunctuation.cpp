#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter the string : \n";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        if( !((tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z') || (str[i] >= '1' && str[i] <= '9') || (str[i] == ' '))){
            str.erase(i--, 1); // ==> str.erase(i, 1); i--;
        }
    }

    cout<<str<<endl;
    return 0;
}