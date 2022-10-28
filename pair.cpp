#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p1 = {1,3};
    cout<<p1.first<<"   "<<p1.second<<endl<<endl;

    pair<int, pair<int, int>> p2 = {10, {50, 100}};
    cout<<p2.first<<"   "<<p2.second.second<<"  "<<p2.second.first<<endl<<endl;

    pair<int, int> arr[] = {{1,2}, {2,4}, {3,6}, {4,8}, {5, 10}}; // Pair array
    for(int i = 0; i < 5; i++){
        cout<<i+1<<": First-> "<<arr[i].first<<" | Second-> "<<arr[i].second<<endl;
    }
    cout<<endl;
    return 0;
}