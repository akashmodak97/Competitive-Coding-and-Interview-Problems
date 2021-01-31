/* Hacker Blocks */
/* Title - Merge K sorted Arrays */
/* Created By - Akash Modak */
/* Date - 31/01/2021 */


// Given K sorted arrays each with N elements merge them and output the sorted array

// Input Format
// First line contains 2 space separated integers K and N.
// Next lines contain K*N space separated integers

// Constraints
// Elements of array <= |10^15|
// N <= 10^5
// K <= 10

// Output Format
// Single line consisting of space separated numbers

// Sample Input
// 3 4
// 1 3 5 7 2 4 6 8 0 9 10 11
// Sample Output
// 0 1 2 3 4 5 6 7 8 9 10 11
// Explanation
// If we were to combine all the arrays into one and then sort it , the output would be as above.


#include<bits/stdc++.h>
using namespace std;
typedef pair<long long int,pair<int,int>> myPair;
int main() {
	int n,k;
	cin>>k>>n;
	vector<vector<long long int>> v(k);
	for(int i=0;i<k;i++){
		v[i] = vector<long long int>(n);
		for(int j=0;j<n;j++){
			int p;
			cin>>p;
			v[i][j] = p;
		}
	}
	priority_queue<myPair,vector<myPair>,greater<myPair>> pq;
	for(int i=0;i<k;i++){
		pq.push({v[i][0],{i,0}});
	}
	vector<long long int> res;
	while(!pq.empty()){
		myPair curr = pq.top();
		pq.pop();
		long long int ele = curr.first;
		int x = curr.second.first;
		int y = curr.second.second;
		res.push_back(ele);
		if(y+1<v[x].size()){
			pq.push({v[x][y+1],{x,y+1}});
		}
	}
	for(auto x: res){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}