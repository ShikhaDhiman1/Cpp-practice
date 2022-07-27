#include <iostream>
using namespace std;

void strcopy(char *str1,char *str2){

    int j = 0;
    while( str1[j] != '\0' ){        
        str2[j] = str1[j];
         j++;
    }
    str2[j] = '\0';
    // cout<<str2;
    //     cout<<endl;

    // int n1 = 0, n2 = 0;
    // while( str1[n1] != '\0' ){        
    //     n1++;
    // }

    // while( str2[n2] != '\0' ){        
    //     n2++;
    // }

    // cout<<n1<<"   "<<n2<<endl;

    // if(n1 >= n2){
    //     for(int i = 0; i < n1; i++){
    //         str2[i] = str1[i];
    //         // cout<<i<<" : "<<str2[i]<<endl;
    //     }
    //     cout<<str2;
    //     cout<<endl;
    // }
    
    // else{
    //     for(int i = 0; i < n2; i++){
    //         if(i < n1){
    //             str2[i] = str1[i];
    //            // cout<<str2[i]<<endl;
    //         }
    //         else {
    //             //cout<<i<<endl;
    //             str2[i] = '\0';
    //             //cout<<str2[i]<<endl;
    //         }    

    //     }
    // }
    // cout<<str2<<endl;
    return;

}

// void strcopy(char *str1,char *str2){
//     int size = 0;
//     while( str1[size] != '\0' ){
//         size++;
//     }

//     for(int i = 0; i < size; i++){
//         str2[i] = str1[i];
//     }
//     return;

// }

int main(){

    char s1[1000];
    char s2[1000];

    cout<<"\nEnter String 1 : ";
    cin>>s1;

    cout<<"Enter String 2 : ";
    cin>>s2;

    strcopy(s1, s2);
    cout<<"\nStrings after copying String 1 into string 2 :-> \n\n";
    cout<<"String 1 : "<<s1<<endl;
    cout<<"String 2 : "<<s2<<endl<<endl;
    //cout<<int('a')<<" "<<int('z');

    return 0;

}