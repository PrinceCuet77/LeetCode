class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m, nums1.end()); 
        
        for ( int x : nums2 ) {
            auto it = lower_bound(nums1.begin(), nums1.end(), x); 
            nums1.insert(it, x);
        }
    }
};