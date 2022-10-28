#include <bits/stdc++.h>
using namespace std;

void orderedSet(){  // sorted, ordered and unique
    set<int> s1;

    s1.insert(1);
    s1.insert(4);
    s1.insert(2);
    s1.insert(2);
    s1.insert(9);
    s1.insert(7);

    cout<<"Elements in set : ";
    for(auto i: s1){
        cout<<i<<" ";
    }
    cout<<endl;

    s1.find(3);
    // auto x = s1.find(3);
    // cout<<"3 in set : "<<s1[x]<<endl;
    s1.find(7);

    auto it = s1.lower_bound(2);
    // auto it = s1.upper_bound(7);
    s1.erase(2);
    cout<<"Elements in set : ";
    for(auto i: s1){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"No. of 1's : "<<s1.count(1)<<endl;
    cout<<endl;
    s1.erase(s1.find(4), s1.find(9));

    cout<<"Elements in set : ";
    for(auto i: s1){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"No. of 3's : "<<s1.count(3)<<endl;
    cout<<endl;

    s1.insert(3);
    cout<<"No. of 3's : "<<s1.count(3)<<endl;
    cout<<"Elements in set : ";
    for(auto i: s1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    s1.erase(s1.begin(), s1.end());
    cout<<"Elements in set : ";
    for(auto i: s1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is the set empty : ";
    s1.empty()? cout<<"Yes\n" : cout<<"No\n";
    return;
}

void multiSet(){ // ordered and sorted elements but not unique. one element can occur more than once
    multiset<int> ms;

    ms.insert(5);
    ms.insert(6);
    ms.insert(2);
    ms.insert(1);
    ms.insert(5);
    ms.insert(5);
    ms.insert(2);

    cout<<"Elements in the multi-set : ";
    for(auto i : ms){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    for(auto i : ms){
        cout<<"No. of "<<i<<" : "<<ms.count(i)<<endl;
    }
    cout<<endl;

    ms.find(5);
    ms.find(2);

    ms.erase(2);
    cout<<"Elements in the multi-set : ";
    for(auto i : ms){
        cout<<i<<" ";
    }
    cout<<endl;

    ms.erase(ms.find(5));
    cout<<"Elements in the multi-set : ";
    for(auto i : ms){
        cout<<i<<" ";
    }
    cout<<endl;
    ms.insert(5);
    ms.insert(5);
    cout<<"Elements in the multi-set : ";
    for(auto i : ms){
        cout<<i<<" ";
    }cout<<endl;
    ms.erase(ms.find(5), ms.find(7));
    cout<<"Elements in the multi-set : ";
    for(auto i : ms){
        cout<<i<<" ";
    }
    cout<<endl;

    return;
}

void unorderedSet(){ // similar to ordered set and the only difference is that the elements are not ordered(,i.e., not in sorted order).
    unordered_set<int> us; // all functions in O(1) , in worst case(which is rare) complexity is O(n).
    us.insert(4);
    us.insert(2);
    us.insert(3);
    us.insert(3);
    us.insert(2);
    us.insert(10);

    cout<<"Elements in unordered set : ";

    for(unordered_set<int>::iterator it = us.begin(); it != us.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<"No. of 3 : "<<us.count(3)<<endl;

    us.erase(us.find(3), us.find(4));
    cout<<endl;
    for(unordered_set<int>::iterator it = us.begin(); it != us.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl<<endl;
    us.erase(4);
    for(unordered_set<int>::iterator it = us.begin(); it != us.end(); it++){
        cout<<*(it)<<" ";
    }
    return;
}

int main(){
    orderedSet();
    cout<<"\n-------------------------------------\n\n";
    multiSet();
    cout<<"\n-------------------------------------\n\n";
    unorderedSet();
    return 0;
}