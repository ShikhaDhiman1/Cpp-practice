#include <iostream>
using namespace std;

void upper(string s){
    for(int i = 0; i < s.length(); i++){
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            s[i] = char(int(s[i]) - 32);
        }
    }
    // for(int i = 0; i < s.length(); i++){
    //     if(s[i] > 'a' && s[i] < 'z'){
    //         s[i] = s[i] - 32;
    //     }
    // }    
    // cout<<endl;

    //------------- OR --------------------------------

    // transform(s.begin(), s.end(), s.begin(), ::toupper)
    // cout<<s<<endl;
    cout<<"\n------------------------------------------------";
    cout<<"\nEntered String in UpperCase : ";
    cout<<s<<endl;
    cout<<"------------------------------------------------\n\n";
    return;
}

void lower(string s){
    for(int i = 0; i < s.length(); i++){
        if(int(s[i]) >= 65 && int(s[i]) <= 90){
            s[i] = char(int(s[i]) + 32);
        }
    }

    //--------- OR -----------------------

    // for(int i = 0; i < s.length(); i++){
    //     if(s[i] > 'A' && s[i] < 'Z'){
    //         s[i] = s[i] + 32;
    //     }
    // }   

    //--------- OR -----------------------

    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout<<s<<endl;

    cout<<"\n------------------------------------------------";
    cout<<"\nEntered string in LowerCase : ";
    cout<<s<<endl;
    cout<<"------------------------------------------------\n\n";
   
}

int main(){
    cout<<"....Converting the case of string....\n\n";

    enter:
        string str;
        cout<<"Enter the string : ";
        //getline(cin, str);
        cin>>str;
        //goto menu;
    
    menu:
        int op;
        cout<<"Choose from following : \n";
        cout<<"1. In Uppercase\t\t 2. In Lowercase\n";
        cout<<"3. Re-Enter\t\t 4. Exit\n";
        cout<<"\nEnter your choice : ";
        cin>>op;

    switch(op){
        case 1: upper(str);
                goto menu;
                break;
        case 2: lower(str);
                goto menu;
                break;
        case 3: goto enter;
                break;
        case 4: exit(0);
        default: cout<<"Wrong Option!!!\n"; 
                 goto menu;  
                 break;             
    }
    return 0;
}