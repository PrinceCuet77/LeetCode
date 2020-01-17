class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector < int > v;
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] == 0 ) 
                v.push_back(i);
        }
        
        for ( int i = 0; i < v.size(); i++ ) { 
            nums.erase(nums.begin()+v[i]-i);
            nums.push_back(0);
            
        }
    }
};