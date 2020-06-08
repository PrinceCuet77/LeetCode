class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = nums[0]; 
        map < int, int > mp; 
        mp[nums[0]]++;
        for ( int i = 1; i < nums.size(); i++ ) {
            a = max(a, nums[i]);
            mp[nums[i]]++;
        }
        
        if ( mp[a] > 1 ) 
            return (a-1) * (a-1);
        
        int b = -1;
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( b < nums[i] && nums[i] != a ) 
                b = nums[i];
        }
        
        return (a-1) * (b-1);
    }
};
