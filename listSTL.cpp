#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l1;

    l1.push_back(1);
    l1.push_front(2);
    l1.push_back(3);
    l1.push_front(4);

    cout<<"The list l1 is : ";
    for(auto i  = l1.begin(); i != l1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Front element of list is : "<<l1.front()<<endl;
    cout<<"Last element of list l1 is : "<<l1.back()<<endl;
    cout<<"Size of List l1 is : "<<l1.size()<<endl;
    cout<<"Maximum size of list l1 is : "<<l1.max_size()<<endl;
    
    l1.empty()? cout<<"\nList l1 is empty!!\n": cout<<"\nList l1 is not empty.\n";

    cout<<"\nPopping front element : ";
    l1.pop_front();
    for(auto i  = l1.begin(); i != l1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"\nPopping last element : ";
    l1.pop_back();
    for(auto i  = l1.begin(); i != l1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"\nClearing the list : \n";
    l1.clear();
    l1.empty()? cout<<"\nList l1 is empty!!\n": cout<<"\nList l1 is not empty.\n";

    cout<<"\nAgain pushing elements into the list..\n";
    l1.push_back(1);
    l1.push_front(2);
    l1.push_back(3);
    l1.push_front(4);

    cout<<"The list l1 is : ";
    for(auto i  = l1.begin(); i != l1.end(); i++){
        cout<<*i<<" ";
    }

    cout<<"\n\nErasing the list using erase() function : ";
    l1.erase(l1.begin(),l1.end());
    l1.empty()? cout<<"\nList l1 is empty!!\n": cout<<"\nList l1 is not empty.\n";

    return 0;

}