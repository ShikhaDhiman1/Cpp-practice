#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;

    s.push(10);
    s.push(8);
    s.push(6);
    s.push(4);
    s.emplace(2); // same as s.push(2);

    s.empty()? cout<<"\nStack is empty!!!\n" : cout<<"\nStack is not empty..\n";

    int len = s.size();
    cout<<"Size of stack is : "<<s.size()<<endl;
    //cout<<"Size of stack is : "<<len<<endl;

    cout<<"The stack contains the following elements : \n";

    // for(int i = 0; i < len; i++){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    s.empty()? cout<<"\nStack is empty!!!\n" : cout<<"\nStack is not empty..\n";

    stack<int> s1;
    s1.emplace(12);
    s1.push(14);

    int len1 = s1.size();
    // for(auto i = 0; i < len1; i++){
    //     cout<<s1.top()<<" ";
    //     s1.pop();
    // }
    cout<<"Top : "<<s.top()<<endl;
    s.top() += 10;
    cout<<"Top : "<<s.top()<<endl;
    s1.swap(s);
    cout<<"After swapping -->\n";
    cout<<"s : ";
    for(int i = 0; i < len1; i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"s1 : ";
    for(int i = 0; i < len; i++){
        cout<<s1.top()<<" ";
        s1.pop();
    }

    return 0;
}