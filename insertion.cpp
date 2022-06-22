#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int *unl = new int(n);
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++){
        cin>>unl[i];
    }
    int *sl=new int(n);
    sl[0]=unl[0];
    cout<<sl[0];
    for(int i=1;i<n;i++){
        int temp=unl[i];
        while(i>0){
            cout<<sl[i-1]<<endl;
            if(sl[i-1]>temp){
                sl[i-1]=temp;cout<<sl[i-1]<<" ";
            }
            else{
                sl[i]=temp;
            }
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<sl[i]<<" ";
    }
    cout<<endl;
    return 0;
}