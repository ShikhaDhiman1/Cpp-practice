#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);

    cout<<"\nDeque after pushing elements at back : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nSize of deque : "<<d.size()<<endl;
    cout<<"Maximum size of deque : "<<d.max_size()<<endl;

    cout<<"\nElement at front : "<<d.front()<<endl;
    cout<<"Element at end : "<<d.back()<<endl;
    cout<<"Element at index 2 : "<<d.at(2)<<endl;

    d.pop_back();
    cout<<"\nDeque after popping an element from back : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();
    cout<<"Deque after popping an element from front : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_front(0);
    d.push_front(10);
    cout<<"Deque after pushing element at front : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.empty()? cout<<"\nDeque is empty!!\n" : cout<<"\nDeque is not empty..\n";

    // erasing a range of elements
    d.erase(d.begin()+1, d.end()-1);
    cout<<"Deque after erasing all elements except the one at front and back : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.erase(d.begin());
    cout<<"Deque after erasing front element : ";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"\nErasing the deque completely : \n";
    d.erase(d.begin(), d.end());
    d.empty()? cout<<"\nDeque is empty!!\n" : cout<<"\nDeque is not empty..\n";
    cout<<"Size of deque : "<<d.size()<<endl;
    cout<<"Maximum size of deque : "<<d.max_size()<<endl;

    return 0;
}