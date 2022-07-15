#include <iostream>
using namespace std;

int main(){
    int r, c;

    cout<<"Enter the row and column for the 2-D array : \n";
    cin>>r>>c;

    int arr[r][c];
    cout<<"Enter the array : \n";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
    }

    int rowStart = 0, rowEnd = r-1, colStart = 0, colEnd = c-1;

    while(rowStart <= rowEnd && colStart <= colEnd){
        for(int i = colStart; i <= colEnd; i++){
            cout<<arr[rowStart][i]<<" ";
        }
        rowStart++;
        for(int i = rowStart; i <= rowEnd; i++){
            cout<<arr[i][colEnd]<<" ";
        }
        colEnd--;
        for(int i = colEnd; i >= colStart; i--){
            cout<<arr[rowEnd][i]<<" ";
        }
        rowEnd--;
        for(int i = rowEnd; i >= rowStart; i--){
            cout<<arr[i][colStart]<<" ";
        }
        colStart++;
    }
    cout<<endl;
    return 0;

}