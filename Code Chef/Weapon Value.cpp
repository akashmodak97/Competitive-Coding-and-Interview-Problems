/* Code Chef */
/* Title - Weapon Value */

// A competition with N participants (numbered 1 through N) is taking place in Chefland. There are N−1 rounds in the competition; in each round, two arbitrarily chosen contestants battle, one of them loses and drops out of the competition.

// There are 10 types of weapons (numbered 1 through 10). You are given N strings S1,S2,…,SN; for each valid i and j, the j-th character of Si is '1' if the i-th contestant initially has a weapon of type j or '0' otherwise. During each battle, for each type j such that both contestants in this battle currently have weapons of type j, these weapons of both contestants are destroyed; after the battle, the winner collects all remaining (not destroyed) weapons of the loser. Note that each contestant may win or lose regardless of the weapons he/she has.

// Chef is feeling bored watching the contest, so he wants to find the maximum possible number of weapons the winner of the tournament could have after the last battle, regardless of which contestants fight in which battles or the results of the battles. Can you help him?
#include <iostream>
using namespace std;

int main() {
	
	int n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    int weaponNotDestroyed[10] = {0};
	    string s;
	    int count = 0;
	    for(int i=1;i<=n;i++)
	    {
	        int arr[10] = {0};
	        cin>>s;
	        for(int j=0;j<s.length();j++)
	        arr[j] = s[j] - '0';
	        for(int j=0;j<10;j++)
	        weaponNotDestroyed[j] = weaponNotDestroyed[j] ^ arr[j];
	        
	    }
	    for(int i=0;i<10;i++)
	    if(weaponNotDestroyed[i] == 1)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
