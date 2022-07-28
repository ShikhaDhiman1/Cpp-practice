#include <iostream>
#include <string>
using namespace std;

int main(){
    string charSet;
    cout<<"\nEnter the character set : ";
    cin>>charSet;

    string str;
    cout<<"\nEnter the String : ";
    cin>>str;

    string alpha = "";
    for(int i = 0; i < 26; i++){
        alpha += char('a' + i);
    }

    for(int i = 0; i < str.length(); i++){
        str[i] = alpha[charSet.find(str[i])];
    }

    cout<<"\nOriginal word : "<<str;

    cout<<endl<<endl;

    //cout<<to_string('a')<<endl; gives : ---> 97

    // for(int i = 0; i < str.length(); i++){
    //     str[i] = char(str[i] - 'a');
    // }

    // cout<<alpha<<endl;
    // char alpha1[1000];
    // string charSet = "qwertyuiopasdfghjklzxcvbnm";
    // for(int i = 0; i < 26; i++){
    //     //cout<<alpha.find(charSet[i])<<endl;
    //     alpha1[alpha.find(charSet[i])] = alpha[i];
    // }
    //string charSet = "qwertyuiopasdfghjklzxcvbnm";
    // string alpha1 = "";
    // for(int i = 0; i < 26; i++){
    //     alpha1 += alpha[charSet.find(alpha[i])];
    // }
    // for(int i = 0; i < 26; i++){
    //     //cout<<alpha.find(charSet[i])<<endl;
    //     alpha1[alpha.find(charSet[i])] = alpha[i];
    // }
    //cout<<"\nNew Character Set is : "<<alpha1<<endl;
    //cout<<alpha<<endl;

    // for(int j = 0; j < str.length(); j++){
    //     cout<<alpha1[alpha.find(str[j])];
    // }

    return 0;
}