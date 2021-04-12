class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map < int, int > mp; 
        for ( int i = 0; i < nums.size(); i++ ) 
            mp[nums[i]]++;
        
        int cnt = 0; 
        for ( auto x : mp ) {
            if ( x.second == 1 ) 
                cnt += x.first; 
        }
        
        return cnt;
    }
};
