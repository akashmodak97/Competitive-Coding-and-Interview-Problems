/* Code Chef */
/* Title - Doctor Chef */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Chef is multi-talented. He has developed a cure for coronavirus called COVAC-19. Now that everyone in the world is infected, it is time to distribute it throughout the world efficiently to wipe out coronavirus from the Earth. Chef just cooks the cure, you are his distribution manager.

// In the world, there are N countries (numbered 1 through N) with populations a1,a2,…,aN. Each cure can be used to cure one infected person once. Due to lockdown rules, you may only deliver cures to one country per day, but you may choose that country arbitrarily and independently on each day. Days are numbered by positive integers. On day 1, Chef has x cures ready. On each subsequent day, Chef can supply twice the number of cures that were delivered (i.e. people that were cured) on the previous day. Chef cannot supply leftovers from the previous or any earlier day, as the cures expire in a day. The number of cures delivered to some country on some day cannot exceed the number of infected people it currently has, either.

// However, coronavirus is not giving up so easily. It can infect a cured person that comes in contact with an infected person again ― formally, it means that the number of infected people in a country doubles at the end of each day, i.e. after the cures for this day are used (obviously up to the population of that country).

// Find the minimum number of days needed to make the world corona-free.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and x.
// The second line contains N space-separated integers a1,a2,…,aN.
// Output
// For each test case, print a single line containing one integer ― the minimum number of days.

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
	fast;
	int t;
	cin>>t;
	while(t--){
	    ll n,x;
	    ll days=0;
	    cin>>n>>x;
	    vector<ll> a(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a.begin(),a.end());
	    auto it = lower_bound(a.begin(),a.end(),x);
	    ll lb = it-a.begin();
	    for(int i=lb;i<n;i++){
	        if(x<a[i]){
	            while(x<a[i]){
	                x*=2;
	                days++;
	            }
	            days++;
	        }
	        else
	        days++;
	        x=2*a[i];
	    }
	    ll total = lb + days;
	    if(lb!=0){
	        days = 0;
	        lb--;
	        for(int i=lb;i<n;i++){
	            if(x<a[i]){
	                while(x<a[i]){
	                x*=2;
	                days++;
	                }
	                days++;
	            }
	            else
	            days++;
	            x=2*a[i];
	        }
	        if(lb+days<total)
	        cout<<lb+days<<endl;
	        else
	        cout<<total<<endl;
	    }
	    else
	    cout<<total<<endl;
	    
	}
	return 0;
}
