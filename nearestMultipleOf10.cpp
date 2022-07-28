#include <iostream>
using namespace std;

int round(string str){
    int num = stoi(str);

    int quot = abs(num / 10);
    int ans;
    if(((quot *10) + 5) < num) ans = (((quot) * 10) + 10);

    else ans = (quot * 10);

    return ans;
}

string roundStr(string str){
    int n = str.size();
    if(str[n-1] >= '0' && str[n-1] <= '5' ){
        str[n-1] = '0';
    }

    else if(str[n-1] = '9'){
        str[n-1] = '0';
        for(int i = 2; i <= n; i++){
            if(str[n - i] == '9') str[n-i] = '0'; 
            else {
                str[n - i] = char(str[n - i] + 1);
                break;
            }
        }
        if(str[0] == '0'){
            
            str = '1' + str;
            
        }
    }
    else if(str[n - 1] >= '6' && str[n - 1] <= '8'){
        str[n-1] = '0';
        str[n-2] = char(str[n-1] + 1);
    }

    else {
        cout<<"\nPlease enter a string containing integers only..\n";
    }

    return str;

}

int main(){
    string str;

    cout<<"Enter the value : ";
    cin>>str;
    
    //cout<<"Nearest multiple of ten is : "<<round(str)<<endl;

    cout<<"Nearest multiple of ten is : "<<roundStr(str)<<endl;

    //cout<<char(('2' +1))<<endl;
    //cout<<char(('9' +1))<<endl;

    return 0;
}