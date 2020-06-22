/* Code Chef */
/* Title - Cache Hit */
// Chef has a memory machine. It has one layer for data storage and another layer for cache. Chef has stored an array with length N in the first layer; let's denote its elements by A0,A1,…,AN−1. Now he wants to load some elements of this array into the cache.

// The machine loads the array in blocks with size B: A0,A1,…,AB−1 form a block, AB,AB+1,…,A2B−1 form another block, and so on. The last block may contain less than B elements of Chef's array. The cache may only contain at most one block at a time. Whenever Chef tries to access an element Ai, the machine checks if the block where Ai is located is already in the cache, and if it is not, loads this block into the cache layer, so that it can quickly access any data in it. However, as soon as Chef tries to access any element that is outside the block currently loaded in the cache, the block that was previously loaded into the cache is removed from the cache, since the machine loads a new block containing the element that is being accessed.

// Chef has a sequence of elements Ax1,Ax2,…,AxM which he wants to access, in this order. Initially, the cache is empty. Chef is wondering how many times the machine will need to load a block into the cache layer. Can you help him calculate this number?

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains three space-separated integers N, B and M.
// The second line contains M space-separated integers x1,x2,…,xM.
// Output
// For each test case, print a single line containing one integer ― the number of times the machine loads a block into the cache.

// Constraints
// 1≤T≤100
// 1≤N,B,M≤5,000
// 0≤xi<N for each valid i
// Example Input
// 1
// 5 3 3
// 0 3 4
// Example Output
// 2
// Explanation
// Example case 1: The machine stores elements [A0,A1,A2] in one block and [A3,A4] in another block. When accessing A0, the block [A0,A1,A2] is loaded. Then, accessing A3 removes the previous block from the cache and loads the block [A3,A4]. Finally, when Chef accesses A4, a new block is not loaded, since the block containing A4 is currently loaded in the cache.


#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,b,m,count=0;
	    cin>>n>>b>>m;
	   // int a[m]; 
	   int a;
	   int copy = INT_MIN;
	    for(int i=0;i<m;i++){
	    cin>>a;
	    int block = a/b;
	    if(block!=copy){
	            count++;
	            copy=block;
	    }
	    }
	    
	  
	cout<<count<<endl;
	}
	
	return 0;
}
