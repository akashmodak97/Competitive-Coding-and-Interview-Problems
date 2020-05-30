/* Hacker Blocks */
/* Title - Hollow Diamond Pattern */
// Take N (number of rows), print the following pattern (for N = 5).

//      * * * * *
//      * *   * *
//      *       *
//      * *   * *
//      * * * * *

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<'*'<<" ";
    }
    cout<<endl;
    int a=n/2;
    for(int i=0;i<n-2;i++){
        if(i<a)
        for(int j=0;j<a-i;j++){
            cout<<'*'<<" ";
        }
        else{
            for(int j=0;j<=i-a+1;j++){
                cout<<'*'<<" ";
            }
            
        }
        if(i<a)
        for(int j=0;j<2*i+1;j++){
            cout<<" "<<" ";
        }
        else{
            for(int j=0;j<2*(n-2-i)-1;j++){
                cout<<" "<<" ";
            }
        }
        if(i<a){
            for(int j=0;j<a-i;j++){
                cout<<'*'<<" ";
            }
        }
        else{
            for(int j=0;j<=i-a+1;j++){
                cout<<'*'<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<'*'<<" ";
    }
    cout<<endl;
    
}
