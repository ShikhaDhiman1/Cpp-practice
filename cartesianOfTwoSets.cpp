//PROGRAM TO FIND THE CARTESIAN PRODUCT OF GIVEN TWO SETS........

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"\nEnter the size of set 1 : ";
    cin>>n;
    cout<<"\nEnter the size of set 2 : ";
    cin>>m;

    int set1[n];
    int set2[m];

    cout<<"\nEnter set 1 : \n";
    for(int i = 0; i < n; i++){
        cin>>set1[i];
    }

    cout<<"Enter set 2 : \n";
    for(int j = 0; j < m; j++){
        cin>>set2[j];
    }
    cout<<"\nThe number of elements in the cartesian product are : "<<(n * m)<<endl;

    cout<<"\nThe carteisan product of set 1 and set 2 is as follows : \n";
    cout<<"{ ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<"("<<set1[i]<<","<<set2[j]<<"), ";
        }
    }
    cout<<"}\n";
    cout<<endl;
    return 0;
}