class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto ip = unique(nums.begin(), nums.begin()+nums.size()); 
        nums.resize(distance(nums.begin(), ip)); 
        
        return nums.size();
    }
};