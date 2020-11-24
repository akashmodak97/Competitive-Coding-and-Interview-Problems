/* Geeks for Geeks */
/* Title - Min Heap Implementation */
/* Created By - Akash Modak */
/* Date - 24/11/2020 */

// Given a priority queue (max heap) and Q queries to be performed on priority queue. The task is to perform operations based on queries.
// 1. p : query to push element (x, given with query) to priority_queue and print size.
// 2. pp : query to pop element from priority_queue and print size.
// 3. t : query to return top element of priority_queue, if empty -1 will be printed.

// Input Format:
// First line of input contains number of testcases T. For each testcase, first line of input contains Q queries. Next Q lines contains Q queries.

// Output Format:
// For each testcase, perform the required operation, and print if anything required.

// Your Task:
// Your task is to complete the functions push_pq(), pp_pq() and pq_top(), so that the queries are performed.

// Constraints:
// 1 <= T <= 100
// 1 <= Q <= 100

// Example:
// Input:
// 1
// 5
// p 5
// p 3
// p 1
// t
// pp

// Output:
// 1
// 2
// 3
// 1
// 2

// Explanation:
// Testcase 1: Pushing 5, 3, 1 to queue. Now, fetching top which is 1 (according to min heap property smallest element at top). Popping back element from queue, size reduced to 2.


// { Driver Code Starts
//Initial Template for C++
// CPP code to implement functions of priority_queue
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/* Function to implement push operation in priority_queue
* pq : priority_queue
* x : element to be pushed
*/
void push_pq(priority_queue<int, vector<int>, greater<int>> &pq, int x){
    
    // Your code here
    pq.push(x);
    
}

/* Function to implement pop operation in priority_queue
* pq : priority_queue
*/
void pp_pq(priority_queue<int, vector<int>, greater<int>> &pq){
   
    if(!pq.empty())
    /*Your code here*/
    pq.pop();
    else
    return;
    
}

/* Function to implement top operation in priority_queue
* pq : priority_queue
*/
int pq_top(priority_queue<int, vector<int>, greater<int>> &pq){
    
    if(!pq.empty())
    /*Your code here*/
    return pq.top();
    else
    return -1;
    
}

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	// Declaring priority queue
	priority_queue<int, vector<int>, greater<int>> pq; 
	
	while(testcase--){
	    // Queries input
	    int queries;
	    cin >> queries;
	    
	    while(queries--){
	        
	        string s;
	        cin >> s;
	        
	        // If query is to push
	        if(s == "p"){
	            int x;
	            cin >> x;
	            push_pq(pq, x);
	            cout << pq.size() << endl;
	        }
	        
	        // If query is to pop
	        if(s == "pp"){
	            pp_pq(pq);
	            
	            cout << pq.size() << endl;
	        }
	        
	        // If query is to return top
	        if(s == "t"){
	            cout << pq_top(pq) << endl;
	        }
	    }
	    
	    // resetting priority queue
	    pq = priority_queue <int, vector<int>, greater<int>>();
	}
	
	return 0;
}  // } Driver Code Ends