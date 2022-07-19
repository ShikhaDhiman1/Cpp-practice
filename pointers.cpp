#include <bits/stdc++.h>
#include "hexTodecimal.h"
using namespace std;

void increment(int &a){
    a++;
    return;
}

int main(){

    // int a = 10;
    // int *p = &a;
    // int **q = *p;
    // ==> -----:->
    // q = address of p;
    // *q = p = address of a;
    // **q = *p = value of a = 10;

    int a = 10;
    int *aptr;
    aptr = &a;

    cout<<"\na : "<<a<<endl;
    cout<<"aptr : "<<aptr<<endl;
    cout<<"*aptr : "<<*aptr<<endl;

    *aptr = a*10;

    cout<<"\nModified value : \n";

    cout<<"a : "<<a<<endl;
    //cout<<"aptr : "<<hextodec(to_string(aptr))<<endl;
    cout<<"*aptr : "<<*aptr<<endl<<endl;

    // pointer to a pointer......
    int **pTop;
    pTop = &aptr;

    cout<<"Pointer to a pointer : \n";
    cout<<"&aptr(address of aptr) -> pTop : "<<(pTop)<<endl;
    cout<<"*pTop(value at aptr => address of a)  : "<<(*pTop)<<endl;
    cout<<"**pTop(value at address of a => value of a) : "<<(**pTop)<<endl<<endl;

    cout<<"aptr(pointer of base type int) : "<<aptr<<endl;
    cout<<"aptr + 2 : "<<aptr + 2<<"(,i.e., aptr + 2*(4 bytes of an int))"<<endl<<endl;
    cout<<"aptr - 2 : "<<aptr - 2<<"(,i.e., aptr - 2*(4 bytes of an int))"<<endl<<endl;

    int b = 200;
    int *bptr;
    bptr = &b;
    cout<<"bptr : "<<bptr<<endl<<endl;

    //cout<<"bptr - aptr : "<<bptr-aptr<<endl; -----wrong
    int int_bptr = hextodec("0x61fe28");
    int int_aptr = hextodec("0x61fe4c");
    cout<< "bptr - aptr : "<<int_bptr-int_aptr<<endl<<endl;

    // incrementing a pointer......
    int *x = ++aptr;
    cout<<"x (++aptr) : "<<x<<endl<<endl;

    cout<<hextodec("0x61fe38")<<endl;
    cout<<hextodec("0x61fe3c")<<endl;
    cout<<hextodec("61fee8")<<endl;
    cout<<hextodec("61feec")<<endl<<endl;

    string str = "abc";
    string *pstr = &str;

    cout<<"pstr(pointer to base type string) : "<<pstr<<endl;
    cout<<"pstr + 2 : "<<pstr + 2<<"(,i.e., pstr + 2*(24 bytes of a string) = pstr + 2*24)"<<endl;
    cout<<"pstr - 2 : "<<pstr - 2<<"(,i.e., pstr - 2*(24 bytes of a string) = pstr - 2*24)"<<endl;
    cout<<"pstr++ : "<<++pstr<<endl;

    int x1 = hextodec("0x61fe18");
    int x2 = hextodec("0x61fe30");
    cout<<"Size of a srting in bytes is : "<<(x2 - x1)<<endl<<endl;

    cout<<"size of a string in bytes is : "<<sizeof(string)<<endl;
    cout<<"size of a int in bytes is : "<<sizeof(int)<<endl;
    cout<<"size of a float in bytes is : "<<sizeof(float)<<endl;
    cout<<"size of a char in bytes is : "<<sizeof(char)<<endl;

    // Pointers and arrays...
    cout<<"\nEnter the size of array : ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"\nEnter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"\nThe address of first element of array is : "<<arr<<endl;

    cout<<"\nThe address of :\n";
    for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"]( element "<<i+1<<" of array ) is : "<<arr + i<<endl;
    }

    cout<<"\n*arr : "<<*arr<<endl;
    cout<<"arr + 1 => address of arr[0] + 1*(size of the base type) => 0x61fd98 + 1*4 = 0x61fd9c\n";
    cout<<"The result of arr * 4 is : \n";
    for(int i = 0; i < n; i++){
        cout<<*(arr+i)*4<<" ";
    }
    cout<<endl<<endl;

    // ------ OR -------
    int *ptr = arr;
    for(int i = 0; i < n; i++){
        cout<<*(ptr + i)<<" ";
        // ---- OR ------
        //cout<<*(arr + i)<<" ";
        // ---- OR ------
        //cout<<*ptr<<" ";
        //ptr++;
        //While doing so using *arr ,i.e., using arr++ will give an error!!
    }
    cout<<endl;

    // NOTE : 
    // The pointer 'arr' is not modifiable but is constant. 
    // Thus, arr++ or ar-- or ++arr or --arr are illegal!!!
    

    // PASSING POINTERS to FUNCTIONS...
    int num = 10;
    cout<<"\nNumber before increment : "<<num<<endl; // 10
    increment(num); 
    cout<<"After increment : ";
    cout<<num<<endl; // 11
    // if we did not pass reference to function 'increment' then the value of num wouldn't have incremented.
    
    int i = 10;
    int &j = i;
    cout<<i<<" "<<j<<endl;
    cout<<&i<<" "<<&j<<endl;
    return 0;
}