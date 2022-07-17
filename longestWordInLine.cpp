// Program to check the first largest word in a sentence......

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of sentence : ";
    cin>>n;
    cin.ignore();

    char ch[n+1];
    cout<<"Enter the sentence : ";
    cin.getline(ch, n+1);
    cin.ignore();

    int len = 0;
    int maxLen = INT_MIN;

    int i = 0;
    int start = 0;
    // int maxStart = 0;
    while(true){
        if(ch[i] == ' ' || ch[i] == '\0'){
            //maxLen = max(len, maxLen);
            if(len > maxLen){
                maxLen = len;
                start = i;
            }
            len = 0;
        }
        else len++;
        
        if(ch[i] == '\0') break;
        i++;
    }
    cout<<"Length of longest word is : ";
    cout<<maxLen<<endl;
    cout<<"\nAnd the first longest word is : ";
    for(int i = start-maxLen; i < start; i++){
        cout<<ch[i];
    }
    cout<<endl<<endl;
    return 0;
}