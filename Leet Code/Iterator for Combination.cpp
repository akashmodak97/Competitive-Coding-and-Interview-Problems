/* Leet Code */
/* Title - Iterator for Combination */
/* Created By - Akash Modak */
/* Date - 13/8/2020 */


// Design an Iterator class, which has:

// A constructor that takes a string characters of sorted distinct lowercase English letters and a number combinationLength as arguments.
// A function next() that returns the next combination of length combinationLength in lexicographical order.
// A function hasNext() that returns True if and only if there exists a next combination.
 

// Example:

// CombinationIterator iterator = new CombinationIterator("abc", 2); // creates the iterator.

// iterator.next(); // returns "ab"
// iterator.hasNext(); // returns true
// iterator.next(); // returns "ac"
// iterator.hasNext(); // returns true
// iterator.next(); // returns "bc"
// iterator.hasNext(); // returns false
 

// Constraints:

// 1 <= combinationLength <= characters.length <= 15
// There will be at most 10^4 function calls per test.
// It's guaranteed that all calls of the function next are valid.


set<string> generateCombination(string c,int len){
    set<string> s;
    int mask = 1<<c.length();
    string comb = "";
    for(int i=1;i<mask;i++){
        int no = i,j=0;
        while(no){
            if(no&1)
                comb = comb + c[j];
            j++;
            no>>=1;
        }
        if(comb.length()==len)
            s.insert(comb);
        comb = "";
    }
    return s;
}

class CombinationIterator {
public:
    
    set<string> s;
    set<string>::iterator current;
    CombinationIterator(string characters, int combinationLength) {
        s = generateCombination(characters,combinationLength);
        current = begin(s);
    }
    
    string next() {
        return !(current==end(s))?*current++:"";
    }
    
    bool hasNext() {
        return !(current==end(s));
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */