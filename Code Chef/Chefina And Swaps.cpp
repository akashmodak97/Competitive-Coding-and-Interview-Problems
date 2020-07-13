/* Code Chef */
/* Title - Chefina and Swaps */
/* Created By - Akash Modak */
/* Date - 13/07/2020 */

// Chefina has two sequences A1,A2,…,AN and B1,B2,…,BN. She views two sequences with length N as identical if, after they are sorted in non-decreasing order, the i-th element of one sequence is equal to the i-th element of the other sequence for each i (1≤i≤N).

// To impress Chefina, Chef wants to make the sequences identical. He may perform the following operation zero or more times: choose two integers i and j (1≤i,j≤N) and swap Ai with Bj. The cost of each such operation is min(Ai,Bj).

// You have to find the minimum total cost with which Chef can make the two sequences identical.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains N space-separated integers A1,A2,…,AN.
// The third line contains N space-separated integers B1,B2,…,BN.
// Output
// For each test case, print a single line containing one integer ― the minimum cost, or −1 if no valid sequence of operations exists.

#include<bits/stdc++.h>
#define int      long long int
#define fast    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define pb       push_back
#define endl     '\n'
#define F        first
#define S        second


using namespace std;

int main()
{
fast;
 
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     vector<int> a(n),b(n);
     std::map<int, int> map1,map2,m3,m4,m5;
     for(int i=0;i<n;i++){
     cin>>a[i];
     map1[a[i]]++;
     m3[a[i]]++;
     }
     for(int i=0;i<n;i++){
     cin>>b[i];
     map2[b[i]]++;
     m3[b[i]]++;
     }
     int flag=0;
     for(auto i:m3)
     {
         if(i.S%2!=0)
         {
             flag=1;
             break;
         }
     }
     int t1[n],t2[n];
     for(int i=0;i<n;i++)
     t1[i]=a[i];
     for(int i=0;i<n;i++)
     t2[i]=b[i];
     sort(t1,t1+n);
     sort(t2,t2+n);
     int p=0;
     for(int i=0;i<n;i++)
     {
         if(t1[i]!=t2[i])
         {
             p=1;
             break;
         }
     }
     if(p==0)
     cout<<0<<endl;
     else if(flag==1)
     cout<<-1<<endl;
     else
     {
        int count=0;
        int m=INT_MAX;
        for(int i=0;i<n;i++)
        m=min(m,a[i]);
        for(int i=0;i<n;i++)
        m=min(m,b[i]);
        for(auto i:map1)
        {
            if(i.S>map2[i.F])
            m4[i.F]=(i.S-map2[i.F])/2;
        }
        for(auto i:map2)
        {
            if(i.S>map1[i.F])
            m5[i.F]=(i.S-map1[i.F])/2;
        }
        std::vector<int> vec1,vec2;
        for(auto i:m4)
        {
            for(int j=0;j<i.S;j++)
            vec1.pb(i.F);
        }
        for(auto i:m5)
        {
            for(int j=0;j<i.S;j++)
            vec2.pb(i.F);
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end(),greater<int>());
        for(int i=0;i<vec1.size();i++)
        {
            int k1=vec1[i];
            int k2=vec2[i];
            count+=min(2*m,(min(k1,k2)));
        }
        cout<<count<<endl;
     }
 }
 return 0;
}