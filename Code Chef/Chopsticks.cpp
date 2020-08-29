/* Code Chef */
/* Title - Chopsticks */
/* Created By - Akash Modak */
/* Date - 29/08/2020 */

// [Chopsticks (singular: chopstick) are short, frequently tapered sticks used in pairs of equal length, which are used as the traditional eating utensils of China, Japan, Korea and Vietnam. Originated in ancient China, they can also be found in some areas of Tibet and Nepal that are close to Han Chinese populations, as well as areas of Thailand, Laos and Burma which have significant Chinese populations. Chopsticks are most commonly made of wood, bamboo or plastic, but in China, most are made out of bamboo. Chopsticks are held in the dominant hand, between the thumb and fingers, and used to pick up pieces of food.]

// Retrieved from wikipedia

// Actually, the two sticks in a pair of chopsticks need not be of the same length. A pair of sticks can be used to eat as long as the difference in their length is at most D. The Chef has N sticks in which the ith stick is L[i] units long. A stick can't be part of more than one pair of chopsticks. Help the Chef in pairing up the sticks to form the maximum number of usable pairs of chopsticks.

// Input
// The first line contains two space-separated integers N and D. The next N lines contain one integer each, the ith line giving the value of L[i].

// Output
// Output a single line containing the maximum number of pairs of chopsticks the Chef can form.

// Constraints
// 1 ≤ N ≤ 100,000 (10 5 )
// 0 ≤ D ≤ 1,000,000,000 (10 9 )
// 1 ≤ L[i] ≤ 1,000,000,000 (10 9 ) for all integers i from 1 to N
// Example
// Input:

// 5 2
// 1
// 3
// 3
// 9
// 4

// Output:
// 2
// Explanation
// The 5 sticks have lengths 1, 3, 3, 9 and 4 respectively. The maximum allowed difference in the lengths of two sticks forming a pair is at most 2. It is clear that the 4th stick (length 9) cannot be used with any other stick. The remaining 4 sticks can can be paired as (1st and 3rd) and (2nd and 5th) to form 2 pairs of usable chopsticks.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
	    int d,n;
	    cin>>n>>d;
	    int l[n];
	    for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    sort(l,l+n);
	    int count=0,i=0;
	    for(int j=1;j<n;j++){
	        if(l[j]-l[i]<=d){
	            count++;
	            i = j+1<n?j+1:-1;
	            j=j+1;
	        }else{
	            i++;
	        }
	    }
	    cout<<count<<endl;
// 	}
	return 0;
}
