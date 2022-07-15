// Program to calculate matrix multiplication..............

#include <iostream>
using namespace std;

int main(){
    int r1, c1;
    int r2, c2;

    cout<<"Enter the number of rows and columns in first matrix : \n";
    cin>>r1>>c1;
    cout<<endl;
    cout<<"Enter the number of rows and columns in second matrix : \n";
    cin>>r2>>c2;

    int arr1[r1][c1];
    int arr2[r2][c2];

    // | 1 2 |      | 1 2 |
    // | 3 4 |      | 3 4 | 2X2
    // | 5 6 | 3X2

    if(c1 == r2 | c2 == r1){
        cout<<"Enter the matrices as follows : \n";
        cout<<"\nEnter first matrix : \n";
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"\nEnter second matrix : \n";
        for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                cin>>arr2[i][j];
            }
        }

        if(c1 == r2){
            int k = 0;
            int arrM[r1][c2];

            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c2; j++){
                    arrM[i][j] = 0;
                }
            }

            while(k < c1){
                for(int i = 0; i < r1; i++){
                    for(int j = 0; j < c2; j++){
                        arrM[i][j] += arr1[i][k] * arr2[k][j];
                    }
                }
                k++;
            }
            cout<<"\nOutput matrix of matrix multiplication is : \n:";
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c2; j++){
                    cout<<arrM[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        else if(c2 == r1){
            int k = 0;
            int arrM[r2][c1];

            for(int i = 0; i < r2; i++){
                for(int j = 0; j < c1; j++){
                    arrM[i][j] = 0;
                }
            }

            while(k < c2){
                for(int i = 0; i < r2; i++){
                    for(int j = 0; j < c1; j++){
                        arrM[i][j] += arr1[i][k] * arr2[k][j];
                    }
                }
                k++;
            }
            cout<<"\nOutput matrix of matrix multiplication is : \n";
            for(int i = 0; i < r2; i++){
                for(int j = 0; j < c1; j++){
                    cout<<arrM[i][j]<<" ";
                }
                cout<<endl;
            }
        }

    } 
    else{
        cout<<"Matices dimensions are incompatible!!!\n";
        exit(0);
    }

    return 0;

}