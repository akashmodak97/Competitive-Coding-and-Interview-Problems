/* Hacker Blocks */
/* Title - Book Allocation Problem */
/* Created By - Akash Modak */
/* Date - 26/06/2020 */

// You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Input Format
// First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

// Constraints
// 1 < t < 50
// 1< n < 100
// 1< m <= 50
// 1 <= Ai <= 1000

// Output Format
// Print the maximum number of pages that can be assigned to students.

// Sample Input
// 1
// 4 2
// 12 34 67 90
// Sample Output
// 113 
// Explanation
// 1st students : 12 , 34, 67 (total = 113)
// 2nd students : 90 (total = 90)
// Print max(113, 90)

#include<iostream>
#include<climits>
using namespace std;
bool allocation(int books[],int n, int m,int pages){
	int pageRead = 0;
	int count = 1;
	for(int i=0;i<n;i++){
		if(pageRead+books[i]>pages){
			pageRead = books[i];
			count++;
			if(count>m)
				return false;
		}
		else{
			pageRead+=books[i];
		}
	}
	return true;
}
int allocateBooks(int books[],int n,int m){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=books[i];
	}
	if(n<m)
	return -1;
	int ans = INT_MAX;
	int s = books[n-1];
	int e = sum;
	while(s<=e){
		int mid = (s+e)/2;
		bool allocated = allocation(books,n,m,mid);
		if(allocated){
			ans = min(mid,ans);
			e=mid-1;
		}
		else
		s=mid+1;
	}
	return ans;
}
int main() {
	int n,m,t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int books[n];
		for(int i=0;i<n;i++)
		cin>>books[i];
		cout<<allocateBooks(books,n,m)<<endl;
	}
	return 0;
}