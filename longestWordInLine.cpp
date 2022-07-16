// Program to check the largest word in a sentence......

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
    // int start = 0;
    // int maxStart = 0;
    while(true){
        if(ch[i] == ' ' || ch[i] == '\0'){
            maxLen = max(len, maxLen);
            //maxStart = max(start, maxStart);
            len = 0;
           // start = i+1;
        }
        else len++;
        
        if(ch[i] == '\0') break;
        i++;
    }
    cout<<maxLen<<endl;
    // for(int i = 0; i < maxStart; i++){
    //     cout<<ch[i+start];
    // }
    cout<<endl;
    return 0;
}