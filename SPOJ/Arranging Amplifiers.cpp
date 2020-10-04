/* SPOJ */
/* Title - Arranging Amplifiers */
/* Created By - Kushagra Saxena */
/* Date - 04/10/2020 */

//Problem link - https://www.spoj.com/problems/ARRANGE/


#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define per(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vii vector <pair<ll,ll> >
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define umap unordered_map<ll, ll>
#define map map<ll, ll>
#define autoit(x,it) for(auto it = x.begin(); it != x.end(); it++)
#define mems(a, i) memset(a, i, sizeof(a))
#define endl '\n'
#define all(v) v.begin(),v.end()
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define deba(a) cout << #a << " " << a << endl;
int main()
{
	fast;
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vi a1, a2, a3;
		rep(i, 0, n)
		{
			ll x;
			cin >> x;
			if (x == 1)
				a1.pb(1);
			else if (x == 2 or x == 3)
				a2.pb(x);
			else
				a3.pb(x);
		}
		vi ans;
		if (a1.size() > 0)
		{
			rep(i, 0, a1.size())
			ans.pb(a1[i]);
		}
		ll fl = 0;
		if (a3.size() > 0)
		{
			fl = 1;
			sort(all(a3), greater<>());
			rep(i, 0, a3.size())
			ans.pb(a3[i]);
		}
		if (a2.size() > 0)
		{
			if (fl == 1)
				sort(all(a2), greater<>());
			else
				sort(all(a2));
			rep(i, 0, a2.size())
			ans.pb(a2[i]);
		}
		rep(i, 0, ans.size())
		cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}
