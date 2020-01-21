/* Hacker Blocks */
/* Title - Help Ramu */

//Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.
//
//Public transport is not free. There are 4 types of tickets:
//
//A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
//A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
//A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
//A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.
//
//Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.
//
//Input Format:
//Each Test case has 4 lines which are as follows:
//
//The first line contains four integers c1,?c2,?c3,?c4 (1?=?c1,?c2,?c3,?c4?=?1000) — the costs of the tickets.
//The second line contains two integers n and m (1<=n,m<=1000) — the number of rickshaws and cabs Ramu is going to use.
//The third line contains n integers ai (0<=ai<=1000) — the number of times Ramu is going to use the rickshaw number i.
//The fourth line contains m integers bi (0<=bi<=1000) — the number of times Ramu is going to use the cab number i.
//
//Constraints:
//1 <= T <= 1000 , where T is no of testcases
//1<=c1,c2,c3,c4<=1000
//1?=?n,?m?=?1000
//0?=?ai?, bi =?1000
//
//Output Format
//For each testcase , print a single number - the minimum sum of rupees Ramu will have to spend on the tickets in a new line.
//
//Sample Input
//2
//1 3 7 19
//2 3
//2 5
//4 4 4
//4 3 2 1
//1 3
//798
//1 2 3
//Sample Output
//12
//1

#include<iostream>
using namespace std;
int main() {
    int t,c1,c2,c3,c4,n,m;
    int r[1001],c[1001];
    cin>>t;
    while(t--)
    {
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        int minCost1=0,minCost2=0,minCost3=0,minCost4=0,minCost=0;
        for(int i=0;i<n;i++)
            cin>>r[i];
        for(int i=0;i<m;i++)
            cin>>c[i];
        for(int i=0;i<n;i++)
            minCost1 += min(r[i]*c1,c2);
        for(int i=0;i<m;i++)
            minCost2 += min(c[i]*c1,c2);
        minCost3 = min(minCost1,c3);
        minCost4 = min(minCost2,c3);
        minCost = min(minCost3+minCost4,c4);
        cout<<minCost<<endl;
    }
	return 0;
}
