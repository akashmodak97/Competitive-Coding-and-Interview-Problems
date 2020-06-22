/* Interview Bit */
/* Title - Largest Number */

// Given a list of non negative integers, arrange them such that they form the largest number.

// For example:

// Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

// Note: The result may be very large, so you need to return a string instead of an integer.

int compare(int,int);
string Solution::largestNumber(const vector<int> &A) {
    
    vector<int> B;
    bool allZero = true;
    for(int i=0;i<A.size();i++){
    if(A[i]!=0)
    allZero=false;
    B.push_back(A[i]);
    }
    if(allZero)
    return "0";
    sort(B.begin(),B.end(),compare);
    string s="";
    int i;
    for( i=0;i<B.size();i++){
        s.append(to_string(B[i]));
    }
    
    return s;
}
int compare(int x,int y){
    string X = to_string(x);
    string Y = to_string(y);
    string xy = X.append(Y);
    string yx = Y.append(X);
    return xy.compare(yx)>0?1:0;
}