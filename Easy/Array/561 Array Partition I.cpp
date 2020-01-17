class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long cnt = 0;
        for ( int i = 0; i < nums.size(); i += 2 ) 
            cnt += min(nums[i], nums[i+1]);
        
        return cnt;
    }
};