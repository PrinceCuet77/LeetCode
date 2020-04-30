class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector < int > store; 
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( store.size() == index[i] ) 
                store.push_back(nums[i]); 
            else {
                store.push_back(0); 
                for ( int j = store.size()-1; j > index[i] ; j-- ) {
                    store[j] = store[j-1]; 
                }
                store[index[i]] = nums[i]; 
            }
        }
        
        return store;
    }
};