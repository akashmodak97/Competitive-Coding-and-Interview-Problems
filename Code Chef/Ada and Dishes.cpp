/* Code Chef */
/* Title - Ada and Dishes */
/* Created By - Akash Modak */
/* Date - 26/12/2020 */

// Chef Ada is preparing N dishes (numbered 1 through N). For each valid i, it takes Ci minutes to prepare the i-th dish. The dishes can be prepared in any order.

// Ada has a kitchen with two identical burners. For each valid i, to prepare the i-th dish, she puts it on one of the burners and after Ci minutes, removes it from this burner; the dish may not be removed from the burner before those Ci minutes pass, because otherwise it cools down and gets spoiled. Any two dishes may be prepared simultaneously, however, no two dishes may be on the same burner at the same time. Ada may remove a dish from a burner and put another dish on the same burner at the same time.

// What is the minimum time needed to prepare all dishes, i.e. reach the state where all dishes are prepared?

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains N space-separated integers C1,C2,…,CN.
// Output
// For each test case, print a single line containing one integer ― the minimum number of minutes needed to prepare all dishes.

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n==1){
	        cout<<a[0]<<"\n";
	    }
	    else if(n==2){
	        cout<<max(a[0],a[1])<<"\n";
	    }
	    else if(n==3){
	        sort(a,a+n);
	        cout<<max(a[0]+a[1],a[2])<<"\n";
	    }
	    else{
	        sort(a,a+n);
	        int first = max(a[0]+a[3],a[1]+a[2]);
	        int second = max(a[0]+a[1]+a[2],a[3]);
	        cout<<min(first,second)<<"\n";
	    }
	}
	return 0;
}
