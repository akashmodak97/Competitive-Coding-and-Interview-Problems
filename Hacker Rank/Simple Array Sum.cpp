/*Hacker Rank*/
/*Title - Simple Array Sum*/
//Given an array of integers, find the sum of its elements.
//
//For example, if the array ar={1,2,3} ,1+2+3=6 , so return 6.
//
//Function Description
//
//Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.
//
//simpleArraySum has the following parameter(s):
//
//ar: an array of integers

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(int i=0;i<ar.size();i++)
        sum += ar[i];
    return sum;
}


