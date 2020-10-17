/* Code Chef */
/* Title - Covid Run */
/* Created By - Akash Modak */
/* Date - 17/10/2020 */

// Covid-19 is spreading fast! There are N cities, numbered from 0 to (N−1), arranged in a circular manner. City 0 is connected to city 1, 1 to 2, …, city (N−2) to city (N−1), and city (N−1) to city 0.

// The virus is currently at city X. Each day, it jumps from its current city, to the city K to its right, i.e., from city X to the city (X+K)%N. As the virus jumps, the cities in between don't get infected. Cities once infected stay infected. You live in city Y. Find if it will reach your city eventually. If it will, print YES, else print NO.

// Input:
// The first line of the input consists of an integer T, the number of test cases.
// The first and only line of each test case contains four space-separated integers - N, K, X and Y, denoting the number of cities, the size of jumps, Covid's current city, and the city that you live in, respectively.
// Output:
// For each test case, in a new line, print YES if Covid shall reach your city after a finite number of days, else print NO.

// Constraints
// 1≤T≤100
// 1≤N≤1000
// 0≤X,Y≤N−1
// 0≤K≤1000
// Subtasks
// Subtask 1 - 100% - Original constraints
// Sample Input:
// 2
// 6 2 5 3
// 12 3 4 2
// Sample Output:
// YES
// NO



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
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    if(y>n)
	    cout<<"NO"<<"\n";
	    else{
	        bool flag = false;
	        for(int i=1;i<=n;i++){
	            if((x+k*i)%n==y){
	                cout<<"YES"<<"\n";
	                flag = true;
	                break;
	            }
	        }
	        if(!flag)
	        cout<<"NO"<<"\n";
	        
	    }
	}
	return 0;
}
