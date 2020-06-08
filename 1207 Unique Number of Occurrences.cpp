class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map < int, int > mp; 
        for ( auto x : arr ) 
            mp[x]++;
        
        map < int, int > ans; 
        for ( auto x : mp ) 
            ans[x.second]++;
        
        bool flag = true; 
        for ( auto x : ans ) {
            if ( x.second > 1 ) {
                flag = false; 
                break;
            }
        }
        
        return flag;
    }
};
