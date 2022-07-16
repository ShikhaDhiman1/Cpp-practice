// Program to check if a word is a palindrome using character array.......

#include <iostream>
#include <cctype> // header file that declares a set of functions to classify( and transform ) individual characters. Ex., tolower(), toupper(). 
using namespace std;

int main(){

    // int size;
    // cout<<"Enter the size of character : ";
    // cin>>size;
    // char ch[size+1];

    char ch[100];

    cout<<"Enter the character array to be checked for palindrome : \n";
    cin>>ch;

    int size = 0;
    
    while(ch[size] != '\0'){
        size++;
    }
    
    int k = size-1;
    bool flag = true;
    
    for(int j = 0; j < size/2; j++){
        if(k > size/2){
            if(tolower(ch[j]) != tolower(ch[k])){ 
                flag = false;
                break;
            }
        }
        k--;
    }

    // --------------- OR -----------------------------
    // for(int i = 0; i < size; i++){
    //     if(ch[i] != ch[size-1-i]){
    //         flag = false;
    //         break;
    //     }
    // }

    if(flag){
        cout<<"\n'"<<ch<<"' is a palindrome. \n";
    }
    else{
        cout<<"\n'"<<ch<<"' is not a palindrome.\n";
    }
    
    cout<<endl;
    
    return 0;
}