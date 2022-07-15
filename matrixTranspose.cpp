#include <iostream>
using namespace std;

void swap(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
    return;
}

int main(){
    //int n;

    // cout<<"Enter the value of 'n' of an n X n square matrix : ";
    // cin>>n;

    // int arr[n][n];

    // cout<<"Enter the 2-D array (,i.e., square matrix ) : \n";
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // cout<<"The transpose of given square matrix is : \n";

    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         // int temp = arr[i][j];
    //         // arr[i][j] = arr[j][i];
    //         // arr[j][i] = temp;
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }

    // cout<<"Transposed matrix is : \n";
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    int r, c;
    cout<<"Enter the number of rows and columns in the matrix : \n";

    cin>>r>>c;

    int arr1[r][c];
    cout<<"\nEnter the matrix : \n";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[c][r];
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            arr2[i][j] = arr1[j][i];
        }
    }

    cout<<"\nTransposed matrix is : \n";
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;

}