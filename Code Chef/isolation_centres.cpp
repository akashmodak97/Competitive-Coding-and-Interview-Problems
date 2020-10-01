#include<bits/stdc++.h>
#define int long long
#define w(t) while(t--)
#define bpc(n) __builtin_popcount(n)
#define fr(init, range)	for(int i = init ; i < range ; i++)
#define judge freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pr(a) for(auto x : a) cout<<x<<" ";
using namespace std;
int32_t main()
{
	fast;
	#ifndef ONLINE_JUDGE
	judge;
	#endif

	int t;
	cin>>t;

	w(t)
	{
		int n, q;
		cin>>n>>q;

		string s;
		cin>>s;

		map<char, int> mp;

		for(int i = 0 ; i < n ; i++)
		{
			mp[s[i]]++;
		}

		w(q)
		{
			int c;
			cin>>c;

			int ans = 0;

			for(auto x : mp)
			{
				x.second -= c;

				if(x.second > 0)
					ans+=x.second;
			}
			cout<<ans<<endl;
		}
	}
}
