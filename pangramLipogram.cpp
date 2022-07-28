#include <iostream>
using namespace std;

const int size = 26;

void pangramLipogram(string str){

    bool flag[size];

    for(int i = 0; i < size; i++){
        flag[i] = false;
    }

    int i = 0;
    while(str[i] != '\0'){ // OR for(int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
        if(str[i] >= 'a' && str[i] <= 'z'){
            flag[str[i] - 'a'] = true;
        }
        i++;
    }

    int count = 0;
    for(int i = 0; i < size; i++){
        if(!flag[i]) count++;
    }

    if(count == 1) cout<<"\nEntered sentence is a Pangramatic Lipogram.\n\n";
    else if(count == 0) cout<<"\nEntered sentence is a Pangram only.\n\n";
    else cout<<"\nEntered sentence is neither a pangram nor a lipogram.\n\n";

    return;
}

int main(){

    string s;
    cout<<"Enter the sentence : \n";
    getline(cin, s);

    pangramLipogram(s);

    return 0;

}