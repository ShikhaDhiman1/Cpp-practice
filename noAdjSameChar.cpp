#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter the string : ";
    cin>>str;

    int freq[26];
    for(int i = 0; i < 26; i++){
        freq[i] = 0;
    }

    int i = 0;
    while(str[i] != '\0'){
        freq[tolower(str[i]) - 'a'] += 1;
        i++;
    }
    for(int i = 0; i < str.length(); i++){
        int j = i;
        while(freq[tolower(str[j]) - 'a'] != 0){
            cout<<str[j];
            freq[tolower(str[j]) - 'a']--;
            
        }
    }
    cout<<endl;

    return 0;
}