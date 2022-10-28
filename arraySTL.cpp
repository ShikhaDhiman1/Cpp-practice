#include <iostream>
#include <array>
using namespace std;

int main(){
    // array<int> a;

    array<int, 6> arr = {2,4,6,8,10,12};
    cout<<"\nThe array is : ";
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"\nSize of array is : "<<arr.size()<<endl;
    cout<<"Maximum size of array is : "<<arr.max_size()<<endl; // always same as size()

    int index;
    cout<<"\nEnter a number between 0-5 : ";
    cin>>index;

    cout<<"\nElement at index "<<index<<" in the array is : "<<arr.at(index)<<endl;

    cout<<"\nFirst element in array is : "<<arr.front()<<endl;

    cout<<"\nLast element in array is : "<<arr.back()<<endl;

    cout<<"Is the array empty? "<<arr.empty()<<endl;

    array<int, 0> a;
    cout<<"Is array 'a' empty? ";
    a.empty()? cout<<"\nEmpty!!\n" : cout<<"\nNot Empty.\n";

    array<int, 6> a1;
    a1.fill(7);
    cout<<"\nBefore swapping : \n";
    cout<<"Array a1 : ";
    for(int i:a1){
        cout<<i<<" ";
    }
    cout<<endl;
    

    array<int,6> a2;
    a2.fill(10);
    cout<<"Array a2 : ";
    for(int i:a2){
        cout<<i<<" ";
    }
    cout<<endl;
    a2.swap(a1);
    cout<<"\nAfter swapping : \n";
    cout<<"Array a1 : ";
    for(int i:a1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Array a2 : ";
    for(int i:a2){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}