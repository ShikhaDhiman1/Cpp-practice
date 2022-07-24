#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<<"\nEnter the String : ";
    cin>>str;

    sort(str.begin(), str.end());
    
    char ch = ' ';
    int rep = 1;
    int maxRep = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i+1]) {
            rep++;
            ch = str[i];
        }
        else {
            maxRep = max(maxRep, rep);
            rep = 1;
        }
    }
    cout<<"'"<<ch<<"' has Maximum frequency of ";
    cout<<maxRep<<endl<<endl;
}