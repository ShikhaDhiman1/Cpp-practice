#include <bits/stdc++.h>
using namespace std;

int main(){
    // A map stores key->value pair where key and value both can be of any 
    //data type, i.e., they can be integer, pair, souble, etc. and key is always unique and are in sorted order.
    // complexity : O(log(n))
    map<int, int> mp; // key->int, value->int
    map<int, pair<int, int>> mp1; // key->int, value->pair
    map<pair<int, int>, int> mp2; // key->pair, value->int

    cout<<"\nMap for key as a single integer and value as  a single integer as well : \n";
    // mp-->
    mp[1] = 3;
    mp.emplace(4,8);
    mp.insert({2,9});

    for(auto it:mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    cout<<endl;
    cout<<"\nMap for key as single integer and value as pair of integers : \n";
    //mp1-->
    mp1[4] = {3,9};
    // mp1.emplace(2,9,6); ---> WRONG
    mp1.insert({3,{7,4}});

    for(auto it:mp1){
        cout<<it.first<<" : {"<<it.second.first<<", "<<it.second.second<<"}\n";
    }
    cout<<endl;

    cout<<"\nMap for key as pair of integer and value as single integer : \n";

    mp2[{3,1}] = 9;
    // mp2.emplace(4,9,2); ---> WRONG
    mp2.insert({{2,7},8});
    for(auto i:mp2){
        cout<<"{"<<i.first.first<<", "<<i.first.second<<"} : "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"Value for key=2 is : "<<mp[2]<<endl;
    cout<<"Value for key=5 is : "<<mp[5]<<endl;

    auto it = mp1.find(3);
    // cout<<"Value for key=3 is : {"<<*(it).first<<", "<<*(it).second<<"}\n";
    mp1.find(5); // gives mp1.end() if 5 is not present.

    mp.lower_bound(2);
    mp.upper_bound(4);

    // other functions -> erase, swap, size, and empty are same

    //multiMap -> same as map but the difference is that we can have duplicate keys here, eg. {1,2} and {1,3}

    //unordered_map -> keys are not ordered or sorted but are unique. // Complexity : O(1), in worst case : O(n)
    return 0;
}