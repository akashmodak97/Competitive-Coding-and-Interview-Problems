/* Hacker Blocks */
/* Title - Maximum Circular Sum */
// You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

// Input Format
// First line contains integer t which is number of test case.
// For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

// Constraints
// 1<=t<=100
// 1<=n<=1000
// |Ai| <= 10000

// Output Format
// Print the maximum circular sum for each testcase in a new line.

// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22
// Explanation
// Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)

#include<iostream>
using namespace std;
int kadane(int a[], int low, int high){
	int maxSum=0,currentSum=0;
	for(int i=low;i<=high;i++){
		currentSum+=a[i];
		maxSum = max(maxSum,currentSum);
		if(currentSum<0)
			currentSum=0;
	}
	return maxSum;
}
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int sum1 = kadane(a,0,n-1);
		int cumulativeSum  = 0;
		for(int i=0;i<n;i++){
			cumulativeSum+=a[i];
			a[i]*=(-1);
		}
		int sum2 = cumulativeSum + kadane(a,0,n-2);
		int sum3 = cumulativeSum + kadane(a,1,n-1);
		int maxSum = max(sum1,max(sum2,sum3));
		cout<<maxSum<<endl;
	}
	return 0;
}