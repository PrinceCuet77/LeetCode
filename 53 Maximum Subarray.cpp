class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a = nums[0], sum = 0; 
        for ( int x : nums ) {
            sum += x; 
            a = max(sum, a); 
            sum = max(sum, 0); 
        }
        
        return a; 
    }
};