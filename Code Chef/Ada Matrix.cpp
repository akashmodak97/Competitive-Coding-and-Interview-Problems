/* Code Chef */
/* Title - Ada Matrix */
/* Created By - Akash Modak */
/* Date - 19/09/2020 */

// Chef Ada has a matrix with N rows (numbered 1 through N from top to bottom) and N columns (numbered 1 through N from left to right) containing all integers between 1 and N2 inclusive. For each valid i and j, let's denote the cell in the i-th row and j-th column by (i,j).

// Ada wants to sort the matrix in row-major order ― for each valid i and j, she wants the cell (i,j) to contain the value (i−1)⋅N+j.

// In one operation, Ada should choose an integer L and transpose the submatrix between rows 1 and L and columns 1 and L (inclusive). Formally, for each i and j (1≤i,j≤L), the value in the cell (i,j) after this operation is equal to the value in (j,i) before it.

// The initial state of the matrix is chosen in such a way that it is possible to sort it using a finite number of operations (possibly zero). Find the smallest number of operations required to sort the matrix.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The next N lines describe the matrix. For each valid i, the i-th of these lines contains N space-separated integers ― the initial values in cells (i,1),(i,2),…,(i,N).
// Output
// For each test case, print a single line containing one integer ― the smallest number of operations required to sort the matrix.



#include<bits/stdc++.h>
#define fast                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F                     first
#define S                     second
#define pb                    push_back
#define MP                    make_pair
#define REP(i,a,b)            for (int i = a; i <= b; i++)
#define FLSH                  fflush(stdout)
#define count_1(n)            __builtin_popcountll(n) 
#define max(x,y)              (x>y)?x:y 
#define min(x,y)              (x<y)?x:y 
#define mid(s,e)              (s+(e-s)/2) 
#define mini                  INT_MIN 
#define maxi		      INT_MAX

const int MOD = 1000000007; 
const int FMOD = 998244353; 
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main() {
	// your code goes here
	fast;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // int a[n][n];
	    set<int> s;
	    for(int i=0;i<n;i++){
	        int count =0;
	        for(int j=0;j<n;j++){
	            int temp;
	            cin>>temp;
	            if((i*n)+j+1!=temp)
	            count++;
	        }
	        if(count)
	        s.insert(count);
	    }
	    cout<<s.size()<<"\n";
	}
	return 0;
}
