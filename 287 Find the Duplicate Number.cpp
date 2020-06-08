class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map < int, int > mp;
        int ans;
        for ( auto x : nums ) {
            mp[x]++;
            if ( mp[x] > 1 ) 
                ans = x; 
        }
        
        return ans;
    }
};
