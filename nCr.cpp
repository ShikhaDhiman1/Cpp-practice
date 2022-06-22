#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"Enter total number of objects in the set(n) : ";
    cin>>n;
    cout<<"Enter total number of objects choosen from the set(r) : ";
    cin>>r;
    int nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"\nTotal number of combination(s) (nCr) is/are = "<<nCr<<endl<<endl;
    return 0;
}