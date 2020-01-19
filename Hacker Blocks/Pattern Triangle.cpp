/* Hacker Blocks */
/* Title - Pattern Triangle */

//Take N (number of rows), print the following pattern (for N = 4).
// 		  	1 
//        2 3 2
//      3 4 5 4 3
//    4 5 6 7 6 5 4


#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
            cout<<" ";
        int val = i;
        
        int c = (2*i-1)/2;
        for(int m=1;m<=c+1;m++)
            cout<<val++<<" ";
        val--;
        for(int m=c+2;m<=2*i-1;m++)
            cout<<--val<<" ";
        cout<<endl;
        
    }
	return 0;
}
