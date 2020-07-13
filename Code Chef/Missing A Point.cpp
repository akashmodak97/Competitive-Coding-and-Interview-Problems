/* Code Chef */
/* Title - Missing A Point */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Chef has N axis-parallel rectangles in a 2D Cartesian coordinate system. These rectangles may intersect, but it is guaranteed that all their 4N vertices are pairwise distinct.

// Unfortunately, Chef lost one vertex, and up until now, none of his fixes have worked (although putting an image of a point on a milk carton might not have been the greatest idea after all…). Therefore, he gave you the task of finding it! You are given the remaining 4N−1 points and you should find the missing one.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// Then, 4N−1 lines follow. Each of these lines contains two space-separated integers x and y denoting a vertex (x,y) of some rectangle.
// Output
// For each test case, print a single line containing two space-separated integers X and Y ― the coordinates of the missing point. It can be proved that the missing point can be determined uniquely.

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_set<ll> x,y;
	    int a,b;
	    for(int i=1;i<=4*n-1;i++){
	        cin>>a>>b;
	        if(x.count(a)){
	            x.erase(a);
	        }
	        else
	        x.insert(a);
	        if(y.count(b)){
	            y.erase(b);
	        }
	        else
	        y.insert(b);
	    }
	    cout<<*x.begin()<<" "<<*y.begin()<<endl;
	}
	return 0;
}
