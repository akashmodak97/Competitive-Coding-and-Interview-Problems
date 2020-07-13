/* Code Chef */
/* Title - Chef And Strings */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to reach the string he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is easy in guitars with only 6 strings; However, Chef is playing a guitar with 106 strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to skip while playing his favourite song.

// fig1

// This is how guitar strings are numbered (In ascending order from right to left). Eg. to switch from string 1 to 6, Chef would have to skip 4 strings (2,3,4,5).

// Input:
// First line will contain T, number of testcases. Then the testcases follow.
// The first line of each test case contains N, the number of times Chef has to pluck a string
// The second line of each test case contains N space separated integers - S1, S2, …, SN, where Si is the number of the ith string Chef has to pluck.
// Output:
// For each testcase, output the total number of strings Chef has to skip over while playing his favourite song.


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
	    int n;
	    cin>>n;
	    int curr,prev;
	    long long sum=0;
	    cin>>prev;
	    for(int i=2;i<=n;i++){
	        cin>>curr;
	        sum+=(abs(prev-curr)-1);
	        prev=curr;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
