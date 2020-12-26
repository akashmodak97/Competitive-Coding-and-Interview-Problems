/* Code Chef */
/* Title - Vaccine Production */
/* Created By - Akash Modak */
/* Date - 26/12/2020 */

// Increasing COVID cases have created panic amongst the people of Chefland, so the government is starting to push for production of a vaccine. It has to report to the media about the exact date when vaccines will be available.

// There are two companies which are producing vaccines for COVID. Company A starts producing vaccines on day D1 and it can produce V1 vaccines per day. Company B starts producing vaccines on day D2 and it can produce V2 vaccines per day. Currently, we are on day 1.

// We need a total of P vaccines. How many days are required to produce enough vaccines? Formally, find the smallest integer d such that we have enough vaccines at the end of the day d.

// Input
// The first and only line of the input contains five space-separated integers D1, V1, D2, V2 and P.
// Output
// Print a single line containing one integer ― the smallest required number of days.

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
	int d1,d2,v1,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int totalDays = 0;
	if(d1==d2){
	    int v = v1+v2;
	    if(d1!=1){
	        totalDays += (d1 - 1);
	    }
	    totalDays += (p/v);
	    if(p%v!=0)
	        totalDays++;
	   cout<<totalDays<<"\n";
	}
	else if(d1>d2){
	    if(d2!=1){
	        totalDays += (d2-1);
	    }
	    int temp = d1 - d2;
	    
	    while(p>0 and temp!=0){
	        p-=v2;
	        
	        totalDays++;
	        temp--;
	    }
	    if(p>0){
	        int v = v1 + v2;
	        totalDays += (p/v);
	        if(p%v!=0)
	        totalDays++;
	    }
	    cout<<totalDays<<"\n";
	}
	else{
	    if(d1!=1){
	        totalDays += (d1-1);
	    }
	    int temp = d2 - d1;
	    
	    while(p>0 and temp!=0){
	        p-=v1;
	        
	        totalDays++;
	        temp--;
	    }
	    if(p>0){
	        int v = v1 + v2;
	        totalDays += (p/v);
	        if(p%v!=0)
	        totalDays++;
	    }
	    cout<<totalDays<<"\n";
	}
	return 0;
}
