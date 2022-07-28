// PROGRAM TO CHECK IS A STRING IS A PANGRAM OR NOT.. AND .. TO PRINT ALL THE CHARACTERS THAT CAN ARE NOT PRESENT IN THE STRING AND CAN MAKE THE STRING A PANGRAM........... 

// PANGRAM :-> a pangram or holoalphabetic sentence is a sentence that contains all the alphabets at least once. 

#include <iostream>
using namespace std;

int main(){
    cout<<('a' - 'z')<<endl;

    // char alphabets[1000];

    // for(int i = 0; i < 26; i++){
    //     alphabets[i] = char(97 + i);
    // }

    // for(int i = 0; i < 26; i++){
    //     cout<<alphabets[i]<<" ";
    // }
    cout<<endl;

    string str;
    cout<<"Enter the string to be checked for pangram : \n";
    getline(cin, str);
    

    int flag[26];

    for(int i = 0; i < 26; i++){
        flag[i] = 0;
    }
    int i = 0;
    // while(str[i] != '\0'){
    //     for(int j = 0 ; j < 26; j++){
    //         if(str[i] == alphabets[j] | str[i] == toupper(alphabets[j])){      // have more complexity
    //             flag[j]++;
    //         }
    //     }
    //     i++;
    // }

    while(str[i] != '\0'){
        if((str[i] >= 'a' && str[i] <='z') | (str[i] >= 'A' && str[i] <= 'Z')){    // have less complexity
            flag[tolower(str[i]) - 'a'] += 1;
        }
        i++;
    }

    // for(int i = 0; i < 26; i++){
    //     cout<<flag[i]<<" ";
    // }

    for(int i = 0; i < 26; i++){
        if(!flag[i]){
            cout<<"\nEntered string is not a Pangram!!!\n";
            break;
        }
    }
    if(i == 26){
        cout<<"\nEntered string is a pangram.\n";
    }
    cout<<endl;
    cout<<"The alphabets or characters  missing from the string that can make the string a pangram are : \n";
    int k = 0;
    for(int i = 0; i < 26; i++){
        if(!flag[i]){
            cout<<char(97 + i)<<" ";
            k++;
        }
    }
    if(k == 0) cout<<"None.";
    cout<<endl<<endl;

    return 0;

}