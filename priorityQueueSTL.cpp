#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> pq;
    // max-heap :
    pq.push(1);
    pq.push(15);
    pq.emplace(3);
    pq.push(5);
    pq.push(17);

    cout<<"Top of Priority Queue : "<<pq.top()<<endl;
    cout<<"Size of priority queue : "<<pq.size()<<endl;

    cout<<"popping element from pq....\n";
    pq.pop();
    cout<<"Top of Priority Queue now is : "<<pq.top()<<endl;
    cout<<"Is pq empty? "<<pq.empty()<<endl;

    int l = pq.size();
    for(int i = 0; i < l; i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<"Is pq empty? "<<pq.empty()<<endl;

    //pq.swap(pq)...

    // min-heap :
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(8);
    pq1.push(10);
    pq1.push(6);
    pq1.push(1);
    pq1.push(80);

    cout<<"Top of Priority Queue : "<<pq1.top()<<endl;
    cout<<"Size of priority queue : "<<pq.size()<<endl;

    cout<<"popping element from pq....\n";
    pq1.pop();
    cout<<"Top of Priority Queue now is : "<<pq1.top()<<endl;
    cout<<"Is pq empty? "<<pq1.empty()<<endl;   

    int l1 = pq1.size();
    for(int i = 0; i < l1; i++){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    cout<<"Is pq empty? "<<pq1.empty()<<endl; 
    return 0;
}