// Program for matrix multiplication...............
// Not yet Working
// Need to use class........

#include <bits/stdc++.h>
using namespace std;

// const int c1;
// int c2;

// int **initArr(int r, int c){
//     int  arr[r][c];
//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             cin>>arr[i][j];
//         }
//     }
//     return arr;
// }

int **matMultiply (int a[][10], int r1, int c1, int b[][10], int r2, int c2){
    int **c;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            c[i][j] = 0;  
        }
    }

    int k = 0;
    while(k < c1){
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
        k++;
    }
    return c;
}

int main(){
    int r1, c1;
    int r2, c2;

    cout<<"Enter the number of rows and columns in first matrix 'A' : \n";
    cin>>r1>>c1;
    cout<<endl;
    cout<<"Enter the number of rows and columns in second matrix 'B' : \n";
    cin>>r2>>c2;

    int a[r1][c1];
    int b[r2][c2];

    //int **a;
    //int **b;

    if(c1 == r2 | c2 == r1){
        cout<<"\nEnter Matrix A : \n";
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                cin>>a[i][j];
            }
        }
        //int **a = initArr(r1, c1);

        cout<<"\nEnter Matrix B : \n";
        for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                cin>>b[i][j];
             }
        }
        //int **b = initArr(r2, c2);

        cout<<"Choose from the following two options : \n";
        cout<<"(I) A X B        (II) B X A\n";
        string op;
        cin>>op;
        if(op == "I" | op == "i"){
            int **c = matMultiply(a, r1, c1, b, r2, c2);
            for(int i = 0; i < r1; i++){
                for(int j = 0; j < c2; j++){
                    cout<<c[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else if(op == "II" | op == "ii"){
            int **c = matMultiply(b, r2, c2, a, r1, c1);
        }
        else{
            cout<<"Wrong option!!!\n";
            //exit(0);
        }
    }

    else{
        cout<<"Dimensions of matrices are not compatible!!!\n";
        exit(0);
    }
    
    return 0;
}