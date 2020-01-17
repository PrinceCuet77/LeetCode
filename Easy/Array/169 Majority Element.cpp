class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map < int, int > mp;
        for ( int x : nums )
            mp[x]++;
        
        int t = 0, val;
        for ( auto x : mp ) {
            if ( x.second > t ) {
                t = x.second;
                val = x.first;
            }
        }
        
        return val;
    }
};