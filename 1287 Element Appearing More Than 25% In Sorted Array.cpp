class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map < int, int > mp; 
        
        for ( int i = 0; i < arr.size(); i++ ) 
            mp[arr[i]]++; 
        
        int range = arr.size() / 4, ans; 
        for ( auto x : mp ) {
            if ( x.second > range ) {
                ans = x.first; 
                break; 
            }
        }
        
        return ans; 
    }
};