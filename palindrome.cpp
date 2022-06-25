#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // int num = n;

    // int temp = 0;
    // while(num>0){
    //     int x = num % 10;
    //     num /= 10;
    //     temp = temp * 10 + x;
    // }
    // cout<<temp<<endl;
    // if(temp == n){
    //     cout<<n<<" is a palindrome.\n";
    // }
    // else cout<<n<<" is not a palindrome.\n";
    // // cout<<num;
    
    //---- OR -----

    string str1 = to_string(n);
    string str2 = "";
    //cout<<str1<<endl;
    int len = str1.length();
    int j = 0;
    for(int i = len-1; i >= 0; i--){
        str2[i] = str1[j];
        // cout<<str2[i]<<endl;
        j++;
    }
    // for(int i = 0; i < len; i++){
    //     cout<<str2[i];
    // }
    int i;
    for(i = 0; i < len; i++){
        if(str1[i] != str2[i]){
            cout<<str1<<" is not a palindrome.\n";
            break;
        }
    }
    if(i == len){
        cout<<str1<<" is a palindrome.\n";
    }
    return 0;
}