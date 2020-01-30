/*Hacker Rank*/
/*Title - Sock Merchant*/
//John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
//
//For example, there are n = 7 socks with colors ar = [1,2,1,2,1,3,2] . There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.
//
//Function Description
//
//Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.
//
//sockMerchant has the following parameter(s):
//
//n: the number of socks in the pile
//ar: the colors of each sock
int sockMerchant(int n, vector<int> ar) {

int count=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(ar[i]==ar[j] && i!=j)
        {
            count++;
            ar[i]=INT_MAX-i;
            ar[j]=INT_MAX-j;
            break;
        }
    }
}
return count;
}

