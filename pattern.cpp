#include <iostream>
using namespace std;

int main(){
    int n,m;
    //cout<<"Enter rows and columns : ";
    cout<<"Enter rows : ";
    cin>>n; // >>m;

    // PATTERN 1 :

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++)
    //     cout<<"* ";
    //     cout<<endl;
    // }
    
    //PATTERN 2:

    // for(int i=1;i<=n;i++){
    //     if(i==1| i==n){
    //         for(int j=1;j<=m;j++) cout<<"* ";
    //         cout<<endl;
    //     }
    //     else{
    //         for(int j=1;j<=m;j++){
    //             if(j==1|j==m) cout<<"* ";
    //             else cout<<"  ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // ----OR---------

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         if(i==1| i==n){ cout<<"* ";
    //         }
    //     else if(j==1|j==m) cout<<"* ";
    //     else cout<<"  ";
    //     }
    //         cout<<endl;
    // }

    // PATTERN 3:
 
    // for(int i=n;i>0;i--){
    //     for(int j=i;j>0;j--) cout<<"* ";
    //     cout<<endl;
    // }

    // PATTERN 4:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++) cout<<"* ";
    //     cout<<endl;
    // }

    // PATTERN 5:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=n;j>n-i;j--) cout<<"* ";
    //     //---OR---->
    //         //[ for(int j=1;j<=n;j++){
    //             // if(j<=n-i) cout<<"  ";
    //             // else cout<<"* ";
    //         // } ]
    //     cout<<endl;
    // }

    // PATTERN 6:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++) cout<<i<<" ";
    //     cout<<endl;
    // }

    // PATTERN 7:

    // int x=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++) {cout<<x<<" "; x++;}
    //     cout<<endl;
    // }

    // PATTERN 8:

    // m=2*n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         if(j<=i| j>m-i) cout<<"* ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n;i>0;i--){
    //     for(int j=1;j<=m;j++){
    //         if(j<=i| j>m-i) cout<<"* ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // PATTERN 9:

    // for(int i=n;i>0;i--){
    //     for(int j=1;j<=i;j++) cout<<j<<" ";
    //     cout<<endl;
    // }

    // PATTERN 10:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if(j==i-1 | j==i-3) cout<<"0 ";
    //         else cout<<"1 ";
    //         //--- OR ----
    //             // if((i+j)%2==0) cout<<"1 ";
    //             // else cout<<"0 ";
    //     }
    //     cout<<endl;
    // }

    // PATTERN 11:

    // m=n*2+3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //     if(j<=n-i | j>m-i) cout<<"  ";
    //     else cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=1;j<=n;j++) cout<<"* ";
    //     cout<<endl;
    // }

    // PATTERN 12:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<" ";
    //     for(int j=1;j<=i;j++) cout<<j<<" ";
    //     cout<<endl;
    // }

    // PATTERN 13:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=1;j<=i;j++) cout<<j<<" ";
    //     cout<<endl;
    // }
 
    // PATTERN 14:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=i;j>0;j--) cout<<j<<" ";
    //     for(int j=2;j<=i;j++) cout<<j<<" ";
    //     cout<<endl;
    // }

    // PATTERN 15:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=i;j>0;j--) cout<<j<<" ";
    //     for(int j=1;j<=i;j++) cout<<j<<" ";
    //     cout<<endl;
    // }

    // PATTERN 16:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=1;j<=(2*i-1);j++) cout<<"* ";
    //     cout<<endl;
    // }
    // for(int i=n;i>0;i--){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=1;j<=(2*i-1);j++) cout<<"* ";
    //     cout<<endl;
    // }

    // PATTERN 17:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=1;j<=(2*i-1);j++) cout<<"* ";
    //     cout<<endl;
    // }
    // for(int i=n-1;i>0;i--){
    //     for(int j=1;j<=n-i;j++) cout<<"  ";
    //     for(int j=1;j<=(2*i-1);j++) cout<<"* ";
    //     cout<<endl;
    // }

    m=n/3;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++) cout<<"  ";
        cout<<"* ";
        for(int j=2;j<=2*i-1;j++) cout<<"  ";
        cout<<"* ";
    }
    for(int i=m-1;i>0;i--){
        for(int j=1;j<=2*i-1;j++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m-i;j++) cout<<"  ";
        cout<<"* ";
        for(int j=1;j<=n;j++)
            if(i==1){
                if(j==n|j==m+6) {m=m+6;cout<<"* ";}
            }
            else
        }
    }

    return 0;
}