/* Code Chef */
/* Title - Chef and Wedding Arrangements  */
/* Created By - Akash Modak */
/* Date - 20/8/2020 */

// There are N guests (numbered 1 through N) coming to Chef's wedding. Each guest is part of a family; for each valid i, the i-th guest is part of family Fi. You need to help Chef find an optimal seating arrangement.

// Chef may buy a number of tables, which are large enough for any number of guests, but the people sitting at each table must have consecutive numbers ― for any two guests i and j (i<j) sitting at the same table, guests i+1,i+2,…,j−1 must also sit at that table. Chef would have liked to seat all guests at a single table; however, he noticed that two guests i and j are likely to get into an argument if Fi=Fj and they are sitting at the same table.

// Each table costs K rupees. Chef defines the inefficiency of a seating arrangement as the total cost of tables plus the number of guests who are likely to get into an argument with another guest. Tell Chef the minimum possible inefficiency which he can achieve.

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
    fast;
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
        cin>>n>>k;
        ll a[n+1];
        map<ll, ll>m;
        ll answer =0, vc =0, t=1;
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll mat2[n+1][n+1] = {0};
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                mat2[i][j]=0;
            }
        }
        for(ll i=0;i<n;i++)
        {
            m.clear();
            for(ll j=i; j<n; j++)
            {
                mat2[i][j] = (j==0)?0:mat2[i][j-1];
                if(m.count(a[j]))
                {
                    if(m[a[j]]==1)
                    {
                        mat2[i][j]++;
                    }
                    mat2[i][j]++;
                }
                m[a[j]]++;
            }
        }
        answer = 1e18;
        ll tbl =100;
        ll mat[101][1001] = {0};
        for(int i=0;i<=tbl;i++)
        {
            for(ll j=0;j<=tbl;j++)
            {
                mat[i][j]=0;
            }
        }
        for(ll i=0;i<n+1;i++)
        {
            mat[1][i] = mat2[0][i-1];
        }
        for(ll i=2;i<=tbl;i++)
        {
            mat[i][1]=0;
        }
        for(ll i=2; i<=tbl;i++)
        {
            for(ll j=2;j<=n;j++)
            {
                ll out = 1e18;
                for(ll p=1; p<j;p++)
                {
                    out = min(out,mat[i-1][p]+mat2[p][j-1]);
                }
                mat[i][j]=out;
            }
        }
        for(tbl=1;tbl<=100;tbl++)
        {
            answer = min(tbl*k+mat[tbl][n],answer);
        }
        cout<< answer << endl;
	}
	return 0;
}
