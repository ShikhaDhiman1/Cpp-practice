#include <iostream>
using namespace std;
// string* reverseStr(string s, int n){
//     string* rev_s = new string[n];
//     for(int i = 0; i < n; i++){
//         rev_s[i] = s[n-i-1];
//     }
//     return rev_s;
// }
string revstr(string s){
    int n = s.length();
    for(int i = 0; i < n/2; i++){
        swap(s[i], s[n-i-1]);
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter the string to be reversed : ";
    cin>>s;
    int n = s.length();
    // string* str = reverseStr(s, n);
    // cout<<"Reversed String is : ";
    // for(int i = 0; i< n; i++){
    //     cout<<str[i];
    // }
    cout<<revstr(s)<<endl;
    return 0;
}