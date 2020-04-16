/*Code Chef Practice Question*/
// Coach Khaled is a swag teacher in HIT (Hag Institute of Technology). However, he has some obsession problems.

// Recently, coach Khaled was teaching a course in building 8G networks using TV antennas and programming them with assembly. There are N students (numbered 1 through N) in his class; for some reason, this number is always a multiple of 4. The final exam has finished and Khaled has all the scores of his N students. For each valid i, the score of the i-th student is Ai; each score is an integer between 0 and 100. Currently, the score-grade distribution is as follows:

// grade D for score smaller than 60
// grade C for score greater or equal to 60, but smaller than 75
// grade B for score greater or equal to 75, but smaller than 90
// grade A for score greater or equal to 90
// However, coach Khaled is not satisfied with this. He wants exactly N/4 students to receive each grade (A, B, C and D), so that the grades are perfectly balanced. The scores cannot be changed, but the boundaries between grades can. Therefore, he wants to choose three integers x, y and z and change the grade distribution to the following (note that initially, x=60, y=75 and z=90):

// grade D for score smaller than x
// grade C for score greater or equal to x, but smaller than y
// grade B for score greater or equal to y, but smaller than z
// grade A for score greater or equal to z
// Your task is to find thresholds x, y and z that result in a perfect balance of grades. If there are multiple solutions, choose the one with the maximum value of x+y+z (because coach Khaled wants seem smarter than his students); it can be proved that there is at most one such solution. Sometimes, there is no way to choose the thresholds and coach Khaled would resign because his exam questions were low-quality.

#include <iostream>
#include<algorithm>
using namespace std;
int check(int arr[],int n)
{
    int count = 1;
    for(int i=n/4;i<n;i+=(n/4)){
        if(arr[i]==arr[i-1])
        count = -1;
    }
    return count;
}
int main() {
	int t,n,i,arr[100];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n);
	    if(check(arr,n)==-1)
	    cout<<"-1"<<endl;
	    else{
	        for(i=n/4;i<n;i+=(n/4))
	        cout<<arr[i]<<" ";
	    }
	}
	return 0;
}
