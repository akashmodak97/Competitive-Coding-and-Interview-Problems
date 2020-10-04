/* SPOJ */
/* Title - The Last Digit */
/* Created By - Kushagra Saxena */
/* Date - 04/10/2020 */

//Problem link - https://www.spoj.com/problems/LASTDIG/


// Nestor was doing the work of his math class about three days but he is tired of make operations a lot and he 
// should deliver his task tomorrow. His math’s teacher gives him two numbers a and b. The problem consist of finding 
// the last digit of the potency of base a and index b. Help Nestor with his problem. You are given two integer numbers:
//  the base a (0 <= a <= 20) and the index b (0 <= b <= 2,147,483,000), a and b both are not 0.
//  You have to find the last digit of ab.

// Input
// The first line of input contains an integer t, the number of test cases (t <= 30). t test cases follow. 
// For each test case will appear a and b separated by space.

// Output
// For each test case output an integer per line representing the result

// Sample Input
// Input:
// 2
// 3 10
// 6 2

// Output:
// 9
// 6


#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
ll modularExpo(ll a, ll n, ll MOD)
{
	ll res = 1;
	while (n > 0)
	{
		if (n % 2 == 0)
			a = (a * a) % MOD, n /= 2;
		else
			res = (res * a) % MOD , n--;
	}
	return res;
}
int main()
{
	fast;
	int t;
	scanf("%d", &t);
	while (t--)
	{
		ll a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld\n", modularExpo(a, b, 10));
	}
	return 0;
}