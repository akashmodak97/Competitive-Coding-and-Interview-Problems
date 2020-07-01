/* Hacker Blocks */
/* Title - Unique Number - I */
/* Created By - Akash Modak */
/* Date 7/1/2020 */

#include<iostream> 
using namespace std;
int main() {
	int n;
	cin>>n;
	int x = 0;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		x^=m;
	}
	cout<<x<<endl;
	return 0;
}