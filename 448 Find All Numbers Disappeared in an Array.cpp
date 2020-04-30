class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map < int, int > mp; 
        for ( int x : nums ) 
            mp[x]++;
        
        int len = nums.size(); 
        for ( int i = 1; i <= len; i++ ) {
            if ( mp[i] == 0 ) 
                nums.push_back(i);
        }
        
        return {nums.begin()+len, nums.end()};
    }
};