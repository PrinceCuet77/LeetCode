class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int cnt = INT_MIN; 
        for ( auto account : accounts ) {
            int val = 0;
            for ( auto x : account ) 
                val += x; 
            
            cnt = max(cnt, val);
        }
        
        return cnt; 
    }
};
