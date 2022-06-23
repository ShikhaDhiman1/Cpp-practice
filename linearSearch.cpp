#include <iostream>
using namespace std;

// int main(){
//     int n, key;
//     int i;
//     cout<<"Enter the size of array : ";
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter the array : ";
//     for(i = 0; i < n; i++){
//         cin>>arr[i];
//     }

//     cout<<"Enter the key to be searched : ";
//     cin>>key;

//     cout<<"Key "<<key<<" is present at :-> ";
//     for(i = 0; i < n; i++){
//         if(key == arr[i]){
//             cout<<i<<" index\n";
//             break;
//         }
//     }
//     if(i == n){
//         cout<<"NO Key "<<key<<" is present in the array!!!\n";
//     }
//     return 0;
// }

// int linearSearch(int arr[], int n, int key){
//     int i;
//     for(i = 0; i < n; i++){
//         if(key == arr[i]) return i;
//     }
//     if(i == n){
//         cout<<"NO key "<<key<<" is present int the array!!!\n";
//         return -1;
//     }
// }

void linearSearch(int arr[], int n, int key){
    int i;
    for(i = 0; i < n; i++){
        if(key == arr[i]) {
            cout<<i<<endl;
            break;
        }
    }
    if(i == n){
        cout<<"NO key "<<key<<" is present int the array!!!\n";
    }
} // WORST CASE " TIME COMPLEXITY " = O(n) (= big-oh(n))
  // BEST CASE " TIME COMPLEXITY " = _()_(1) -> constant (= big-omega(n))
  // AVERAGE CASE " TIME COMPLEXITY " = O(N) (= big-theta(n)) 

int main(){
    int n, key, i;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key to be searched : ";
    cin>>key;

    cout<<"The index of "<<key<<" is : ";
    linearSearch(arr, n, key);
    cout<<endl;
    return 0;
}