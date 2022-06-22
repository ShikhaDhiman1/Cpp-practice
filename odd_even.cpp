#include <iostream>
using namespace std;

int main(){
    int n;
    // bool odd=false,even=false;
    cout<<"Enter the number : ";
    cin>>n;
    // if(n%2==0) even=true;
    // else odd=true;
    // if(even) cout<<n<<" is even!!\n";
    // if(odd) cout<<n<<" is odd!!\n";

    // if(n%2==0) cout<<n<<" is even!!\n";
    // else cout<<n<<" is odd!!\n";

    if(n%2==0) goto label1;
    else goto label2;

    label1:
        cout<<n<<" is even!!\n";
    label2:
        cout<<n<<" is odd!!\n";

    return 0;
}