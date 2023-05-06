/* Leet Code */
/* Title - Destination City */
/* Created By - Akash Modak */
/* Date - 06/05/2023 */

// You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

// It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

 

// Example 1:

// Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
// Output: "Sao Paulo" 
// Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".
// Example 2:

// Input: paths = [["B","C"],["D","B"],["C","A"]]
// Output: "A"
// Explanation: All possible trips are: 
// "D" -> "B" -> "C" -> "A". 
// "B" -> "C" -> "A". 
// "C" -> "A". 
// "A". 
// Clearly the destination city is "A".
// Example 3:

// Input: paths = [["A","Z"]]
// Output: "Z"

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> mp;
        for(int i=0;i<paths.size();i++) mp.insert(paths[i][0]);
        for(int i=0;i<paths.size();i++) {
            if(mp.find(paths[i][1]) == mp.end()) return paths[i][1];
        }
        return paths[0][1];
    }
};
