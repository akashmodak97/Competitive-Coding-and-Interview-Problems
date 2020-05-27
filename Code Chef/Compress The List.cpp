/* Code Chef */
/* Title - Compress the list */

// You are given a strictly increasing sequence of integers A1,A2,…,AN. Your task is to compress this sequence.

// The compressed form of this sequence is a sequence of ranges separated by commas (characters ','). A range is either an integer or a pair of integers separated by three dots (the string "..."). When each range a...b in the compressed form is decompressed into the subsequence (a,a+1,…,b), we should obtain the (comma-separated) sequence A again.

// For each maximal contiguous subsequence (a,a+1,…,b) of A such that b≥a+2, the compressed form of A must contain the range a...b; if b≤a+1, such a sequence should not be compressed into a range. A contiguous subsequence is maximal if it cannot be extended by at least one element of A next to it. It can be proved that the compressed form of any sequence is unique (i.e. well-defined).

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        
        cin>>n;
        
        int arr[n+1];
        for(int i=1;i<=n;i++)
        cin>>arr[i];
        // cout<<n;
        
        for(int i=1;i<=n;){
            if(i>1)
            cout<<",";
            int j = i+1;
            while(j<=n && arr[j] - arr[i] == j-i)
            j++;
            if(j-i>=3)
            {
                cout<<arr[i]<<"..."<<arr[j-1];
                i=j;
            }
            else{
                cout<<arr[i];
                i++;
            }
        }
        cout<<endl;
    }
	return 0;
}
