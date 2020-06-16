/* Interview Bit */
/* Title - Add One To Number */
// Given a non-negative number represented as an array of digits,

// add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.

// Example:

// If the vector has [1, 2, 3]

// the returned vector should be [1, 2, 4]

// as 123 + 1 = 124.

vector<int> Solution::plusOne(vector<int> &A) {
   
    int n = A.size();
    int carry = 0;
    int s = A[n-1];
    s+=1;
    A[n-1]=s%10;
    carry = s/10;
    
    // cout<<s;
    // if(carry ==1){
        for(int i = n-2;i>=0;i--)
        {
            if(carry==1){
                s = A[i]+carry;
                A[i] = s%10;
                carry = s/10;
            }
        }
        vector<int> ans;
    if(carry == 1)
        {
            ans.push_back(carry);
            for(int i=0;i<n;i++)
            ans.push_back(A[i]);
            return ans;
            
        }
     else{
        bool done = false;
        for(int i=0;i<n;i++){
            if(A[i]!=0)
            done = true;
            if(done)
            ans.push_back(A[i]);
        }
        return ans;
     }
    
    
    
    
    
}
