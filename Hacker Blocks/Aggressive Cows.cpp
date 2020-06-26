/* Hacker Blocks */
/* Title - Aggressive Cows */
/* Created By - Akash Modak */
/* Date - 27/06/2020 */

// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

// Input Format
// First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.

// Constraints
// 2 <= N <= 100,000
// 0 <= xi <= 1,000,000,000
// 2 <= C <= N

// Output Format
// Print one integer: the largest minimum distance.

// Sample Input
// 5 3
// 1 2 8 4 9
// Sample Output
// 3
// Explanation
// Problem Credits - (Spoj)[http://www.spoj.com/problems/AGGRCOW/]

#include<iostream>
#include<algorithm>
using namespace std;
bool checkCows(int a[],int n,int c,int minSep){
	int lastCow=a[0];
	int count = 1;
	for(int i=1;i<n;i++){
		if(a[i]-lastCow>=minSep){
			lastCow = a[i];
			count++;
			
			if(count==c)
			return true;
		}
	}
	return false;
}
void search(int n,int c,int a[]){
	int ans = 0;
	int start = a[0];
	int end = a[n-1] - a[0];
	while(start<=end){
		int mid = (start+end)/2;
		bool check = checkCows(a,n,c,mid);
		
		if(check){
			start = mid+1;
			ans= mid;
			
		}
		else
		end=mid-1;
	}
	cout<<ans<<endl;
}
int main() {
	int n,c;
	cin>>n>>c;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	search(n,c,a);
	return 0;
}