#include <iostream>
using namespace std;

int& update(int n){
   // int num = n;
   // int &ans = num;
    int &ans = n;
    return ans;
}
int main(){
    int a =10;
    cout<<update(a);
    return 0;
}