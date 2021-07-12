/* Code Chef */
/* Title - XxOoRr */
/* Created By - Akash Modak */
/* Date - 12/07/2021 */

// Given an array A1,A2…AN, find the minimum number of operations (possibly zero) required to convert all integers in A to 0.

// In one operation, you
// choose a non-negative integer p (p≥0),
// select at most K indices in the array A, and
// for each selected index i, replace Ai with Ai⊕2p. Here, ⊕ denotes bitwise XOR.
// Input
// The first line contains an integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains two integers N, K - the size of the array and the maximum number of elements you can select in an operation.
// The second line of each test case contains N integers A1,A2…AN.
// Output
// For each test case, output the minimum number of operations to make all elements of the array 0.

// Sample Input
// 1
// 3 2
// 3 6 10
// Sample Output
// 5

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
	    int n,k, count, term;
	    cin>>n>>k;
	    vi a(n);
	    vi setBit(31);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i = 0; i <= 30; i++){
	        count = 0;
	        for(int j=0;j<n;j++){
	            if(a[j]%2!=0){
	                count++;
	            }
	            a[j]/=2;
	        }
	        setBit[i] = count;
	    }
	    
	    int res = 0;
	    for(int i=0;i<=30;i++){
	        if(setBit[i]%k==0){
	            res += setBit[i]/k;
	        }else{
	            res += setBit[i]/k + 1;
	        }
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
