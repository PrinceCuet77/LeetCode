class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if ( nums.size() < 3 ) 
            return nums[nums.size()-1];
        else {
            auto ip = unique(nums.begin(), nums.begin()+nums.size());
            nums.resize(distance(nums.begin(), ip));
            
            if ( nums.size() < 3 ) 
                return nums[nums.size()-1];
            
            return nums[nums.size()-3];
        }
    }
};