/* Hacker Blocks */
/* Title - Unique Number - II */
/* Created By - Akash Modak */
/* Date 7/1/2020 */



#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		x = x^a[i];
	}
	int temp = x;
	int pos=0;
	while((temp&1)==0){
		pos++;
		temp=temp>>1;
	}
	int mask = (1<<pos);
	int res=0;
	for(int i=0;i<n;i++){
		if((a[i]&mask)>0)
		res=res^a[i];
	}
	int ans = res^x;
	cout<<min(res,ans)<<" "<<max(res,ans);

	return 0;
}