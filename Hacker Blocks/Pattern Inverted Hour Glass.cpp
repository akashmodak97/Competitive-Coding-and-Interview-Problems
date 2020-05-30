/* Hacker Blocks */
/* Title - Pattern Inverted Hour Glass */
// Take N as input. For a value of N=5, we wish to draw the following pattern :

//              5                   5 
//              5 4               4 5 
//              5 4 3           3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2 1 0 1 2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3           3 4 5 
//              5 4               4 5 
//              5                   5 

#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	//Upper

	for(int i=n;i>=1;i--){
		for(int j=n;j>=i;j--){
			cout<<j<<" ";
		}

		for(int j=2*i-1;j>=1;j--){
			cout<<"  ";
		}

		for(int j=i;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
    for(int i=n;i>=0;i--)
        cout<<i<<" ";
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    cout<<endl;
	//Lower

	for(int i=1;i<=n;i++){
		for(int j=n; j>=i;j--){
			cout<<j<<" ";
		}

		for(int j=1;j<=2*i-1;j++){
			cout<<"  ";
		}

		for(int j=i;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}