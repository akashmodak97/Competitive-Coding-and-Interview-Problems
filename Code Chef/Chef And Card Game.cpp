/* Code Chef */
/* Title - Chef And Card Game */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Chef is playing a card game with his friend Morty Smith.

// The rules of the game are as follows:

// There are two piles of cards, pile A and pile B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.
// Each card has one positive integer on it
// The ‘power’ of a card is defined as the sum of digits of the integer on that card
// The game consists of N rounds
// In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.
// The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.
// The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.

// Input:
// First line will contain T, number of testcases.
// The first line of each test case will contain N, the number of rounds played.
// The ith of the next N lines of each test case will contain Ai and Bi, the number on the card drawn by Chef and Morty respectively in round i.
// Output:
// For each test case, output two space separated integers on a new line:
// Output

// 0 if Chef wins,
// 1 if Morty wins,
// 2 if it is a draw,
// followed by the number of points the winner had.
// (If it is a draw then output either player’s points).

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
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    fast;
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a,b,sum1,sum2,chef=0,morty=0;
	    for(int i=0;i<n;i++){
	        cin>>a>>b;
	        sum1 = sumOfDigits(a);
	        sum2 = sumOfDigits(b);
	        if(sum1>sum2){
	            chef++;
	        }
	        else if (sum2>sum1){
	            morty++;
	        }
	        else{
	            chef++;
	            morty++;
	        }
	    }
	    if(chef>morty)
	    cout<<0<<" "<<chef<<endl;
	    else if(morty>chef)
	    cout<<1<<" "<<morty<<endl;
	    else
	    cout<<2<<" "<<chef<<endl;
	}
	return 0;
}
