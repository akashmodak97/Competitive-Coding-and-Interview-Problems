/* Code Chef */
/* Title - Ada King */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Chef Ada is training her calculation skills. She wants to place a king and some obstacles on a chessboard in such a way that the number of distinct cells the king can reach is exactly K.

// Recall that a chessboard has 8 rows (numbered 1 through 8) and 8 columns (numbered 1 through 8); let's denote a cell in row r and column c by (r,c).

// In one move, a king can move to any adjacent cell which shares a side or corner with its current cell and does not contain an obstacle. More formally, a king in a cell (r,c) can move to any cell (rn,cn) if (rn,cn) is a valid cell of the chessboard which does not contain an obstacle and (r−rn)2+(c−cn)2≤2.

// A cell (x,y) can be reached by a king if, after an arbitrary number of moves (including zero), the king is in the cell (x,y).

// Help Ada find any valid configuration of the board such that the king can reach exactly K distinct cells. It is guaranteed that such a configuration always exists. If there are multiple solutions, you may find any one.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains a single integer K.
// Output
// For each test case, print 8 lines describing a chessboard, each containing 8 characters. For each valid i and j, the j-th character on the i-th line should be one of the following:

// 'O' if the cell (i,j) initially contains the king; there should be exactly one such cell
// 'X' if the cell (i,j) contains an obstacle
// '.' if the cell (i,j) is empty

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main() {
	// your code goes here
	fast;
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	   // char out[8][8];
	    cout<<'O';
	    k--;
	    for(int i=0;i<8;i++){
	        for(int j=0;j<8;j++){
	            if(i==0 && j==0)
	            continue;
	            if(k>0){
	                cout<<".";
	                k--;
	            }
	            else
	            cout<<'X';
	            
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
