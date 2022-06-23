#include <iostream>
// #include <climits> // for INT_MAX and INT_MIN
#include <algorithm> // for std::max() and std::min()
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array : ";
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    // cout<<INT_MIN<<"  "<<INT_MAX<<endl;
    int min = arr[0];  // --OR int min = INT_MAX
    int max = arr[0];  // --OR int max = INT_MIN
    for(int i = 0; i < n; i++){
            if(arr[i] < min) min = arr[i];
            if(arr[i] > max) max = arr[i];

            /* ------ OR ----------

            mini = std::min(mini,arr[i]);
            maxi = std::max(maxi,arr[i]); */
            
            //----- OR ------------

            // mini = min(mini,arr[i]);
            // maxi = max(maxi,arr[i]);
    }
    cout<<"Maximum element is : "<<max<<endl;
    cout<<"Minimum element is : "<<min<<endl;
    return 0;
}