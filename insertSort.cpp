#include <iostream>
using namespace std;

int *insertSort(int *a,int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    return a;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int *array = new int(n);
    cout<<"Enter the array : \n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Array before sorting is : \n";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting is : \n";//<<insertSort(array,n);
    int *x= insertSort(array,n);
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}