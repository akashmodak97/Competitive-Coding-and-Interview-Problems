/* SPOJ */
/* Title - Defense Of A Kingdom */
/* Created By - Akash Modak */
/* Date - 29/08/2020 */


// Problem Link - https://www.spoj.com/problems/DEFKIN/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,w,h;
		int x[40010],y[40010];
		cin>>w>>h>>n;
		if(n==0){
			cout<<w*h<<endl;
			continue;
		}
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		sort(x,x+n);
		sort(y,y+n);

		int dx = x[0]-1;
		int dy = y[0]-1;

		for(int i=1;i<n;i++){
			dx = max(dx,x[i]-x[i-1]-1);
			dy = max(dy,y[i]-y[i-1]-1);
		}

		dx = max(dx,w-x[n-1]);
		dy = max(dy,h-y[n-1]);

		cout<<dx*dy<<endl;
	}
	return 0;
}