#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : \n";
    getline(cin, str);

    int i = 0; 
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            if(str[i + 1] == ' ')
                cout<<str[i]<<" ";
            else if(str[i - 1] == ' ')
                cout<<" "<<str[i];
            else  cout<<str[i];
        }
        i++;
    }
    cout<<endl;
    return 0;
}