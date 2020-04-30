class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int cnt = 0; 
        vector < int > result(60, 0); 
        
        for ( int x : time ) {
            int t = x % 60; 
            int rem = (60 - t) % 60; 
            cnt += result[rem]; 
            result[t]++;
        }
        
        return cnt; 
    }
};