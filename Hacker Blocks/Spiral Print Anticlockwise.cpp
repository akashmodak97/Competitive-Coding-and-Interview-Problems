/* Hacker Blocks */
/* Title - Spiral Print Anticlockwise */
// Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 10.

// Output Format
// All M * N integers separated by commas with 'END' written in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END

#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int a[m][n];
	int i,j,sr,sc,er,ec;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	sc=sr=0;
	er=m-1;
	ec=n-1;
	while(sr<=er && sc<=ec){
		for(i=sr;i<=er;i++)
			cout<<a[i][sc]<<", ";
		for(i=sc+1;i<=ec;i++)
			cout<<a[er][i]<<", ";
		if(sr<er && sc<ec){
			for(i=er-1;i>sr;i--)
				cout<<a[i][ec]<<", ";
			for(i=ec;i>sc;i--)
				cout<<a[sr][i]<<", ";
		}
		sr++;
		sc++;
		er--;
		ec--;
	}
	cout<<"END";
	return 0;
}