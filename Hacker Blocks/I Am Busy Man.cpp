/* SPOJ / Hacker Blocks */
/* Title - I Am Very Busy Man */
/* Created By - Akash Modak */
/* Date - 26/8/2020 */

//Problem link - https://www.spoj.com/problems/BUSYMAN/

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,e;
		cin>>n;

		vector<pair<int,int> > v;
		for(int i=0;i<n;i++){
			cin>>s>>e;
			v.push_back(make_pair(s,e));
		}
		sort(v.begin(),v.end(),compare);
		int activity=1;
		int taken_activity = v[0].second;
		for(int i=1;i<v.size();i++){
			if(v[i].first>=taken_activity){
				activity++;
				taken_activity = v[i].second;
			}
		}
		cout<<activity<<endl;
	}
	return 0;
}
