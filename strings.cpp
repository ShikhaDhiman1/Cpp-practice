#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    // string str = "Hello";
    // int i = 0;
    // //int count = 0;
    // while(str[i] != '\0'){
    //     //count++;
    //     i++;
    // }
    // cout<<i<<endl;

    //STRING : 
    // string s1 = "Hello";
    // string s2("Hey");
    // string s3 = s1 + s2;
    // //cout<<(s1*2)<<endl;   //INVALID --> ERRONEOUS
    // //cout<<(s1*s2)<<endl;  //INVALID --> ERRONEOUS
    // cout<<s3<<endl;
    // cout<<(s1 == s2)<<endl;
    // cout<<(s1 > s2)<<endl;
    // cout<<(s1 < s2)<<endl;
    // s1 = s2;
    // cout<<(s1 == s2)<<endl;
    // cout<<(s1 > s2)<<endl;

    // CHARACTER ARRAYS : 
    char str1[] = "Hello";
    // char str2[] = "Hey";
    // cout<<(str1 == str2)<<endl;  //INVALID --> ERRONEOUS
    // cout<<(str1 > str2)<<endl;   //INVALID --> ERRONEOUS
    // str1 = str2;                 //INVALID --> ERRONEOUS
    // cout<<(str1 == str2)<<endl;  //INVALID --> ERRONEOUS
    // cout<<(str1 > str2)<<endl;   //INVALID --> ERRONEOUS
    // char str3[] = str1 + str2;   //INVALID --> ERRONEOUS
    cout<<str1<<endl;

    string str2;
    getline(cin,str2);  // USED ONLY WITH STRINGS.............
    cout<<str2<<endl;

    string str;
    cin>>str;
    cout<<str<<endl;
     
    str.clear();
    cout<<str<<endl;

    string s1 = "abc";
    string s2 = "xyz";
    string s3 = "abc";
    cout<<s1.compare(s2)<<endl;
    cout<<s2.compare(s1)<<endl;
    cout<<s1.compare(s3)<<endl;

    // string str3;
    // cin.getline(str3,6); // USED ONLY WITH CHARACTER ARRAYS......
    // cout<<str3<<endl;
    // string s4 = "ABCD";
    // string s5;
    // cout<<s4.empty()<<endl;
    // cout<<s5.empty()<<endl;
    // s4.clear();
    // cout<<s4.empty()<<endl;

    string s6 = "placement";
    s6.erase(5);
    cout<<s6<<endl;

    string s7 = "encyclopedia";
    cout<<s7.substr(2,5)<<endl;
    s7.erase(4,3);
    cout<<s7<<endl;
    //s7.insert(4,"clo");  cout<<s7<<endl;
    cout<<s7.insert(4,"clo")<<endl;

    string s8 = "encompass";
    cout<<s8.find("com")<<endl;
    cout<<s8.find("s")<<endl;
    cout<<s8.substr(2)<<endl;
    sort(s8.begin(),s8.end());
    cout<<s8<<endl;

    cout<<s8.insert(9,"ing or ed")<<endl;

    string s9 = "1234";
    int x = stoi(s9);
    cout<<x<<endl;

    cout<<int('a')<<" "<<int('z')<<endl;
    cout<<int('A')<<" "<<int('Z')<<endl;
    cout<<int('a')-int('A')<<endl;
    cout<<char(int('j') - 32)<<endl;

    string str3 = "My name is Shikha";
    cout<<str3.length()<<endl;
    int c = 0;
    for(int i = 0; i < str3.length(); i++){
        if(str3[i] == ' '){
            c++;
        }
    }
    cout<<c<<endl;
    cout<<int('!')<<endl;
    cout<<('a' - 32)<<endl;

    return 0;
}