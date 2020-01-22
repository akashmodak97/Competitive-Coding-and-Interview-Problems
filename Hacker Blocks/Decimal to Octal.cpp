/* Hacker Blocks */
/* Title - Decimal to Octal */
//Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

#include<iostream>
using namespace std;
int convert(int x){
    int octal=0;
    int i=1;
    while(x>0)
    {
        octal = octal + (x%8) *i;
        i *= 10;
        x /= 8;
    }
    return octal;
}
int main() {
    int x;
    cin>>x;
    cout<<convert(x);
	return 0;
}
