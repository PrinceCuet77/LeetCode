class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end()); 
        auto lb = lower_bound(nums.begin(), nums.end(), val); 
        auto ub = upper_bound(nums.begin(), nums.end(), val);
        
        nums.erase(lb, ub); 
        return nums.size();
    }
};