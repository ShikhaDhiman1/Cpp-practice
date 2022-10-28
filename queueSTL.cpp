#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(2);
    q.push(4);
    q.emplace(6);
    q.emplace(8);
    q.push(10);

    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Last element : "<<q.back()<<endl;
    cout<<"Size of queue : "<<q.size()<<endl;

    cout<<"\nPopping element from queue -->\n\n";
    q.pop();
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Last element : "<<q.back()<<endl;
    cout<<"Size of queue : "<<q.size()<<endl;

    queue<int> q1;
    q1.push(12);
    q1.emplace(14);

    int l = q.size();
    int l1 = q1.size();

    q.swap(q1);
    cout<<"Queues after swapping : ";
    cout<<"\nqueue q1 : ";
    for(int i = 0; i < l; i++){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\nqueue q : ";
    for(int i = 0; i < l1; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"\nIs q empty? ";
    q.empty()? cout<<"Empty!!!\n" : cout<<"Not Empty..\n";
    cout<<"\nIs q1 empty? ";
    q1.empty()? cout<<"Empty!!!\n" : cout<<"Not Empty..\n";

    return 0;
}