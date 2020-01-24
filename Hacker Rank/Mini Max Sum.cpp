/* Hacker Rank */
/* Title - Mini-Max Sum */
//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
//
//For example, arr = {1,3,5,7,9}. Our minimum sum is 1+3+5+7=16  and our maximum sum is 3+5+7+9=24 . We would print
//
//16 24

void miniMaxSum(vector<int> arr) {
    int minSum = INT_MAX;
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=1;j<arr.size();j++)
        {
            if(j!=i)
            for(int k=i;k<=j;k++)
            {
                currSum += arr[i];
                
            }
        }
    }

}

