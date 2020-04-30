class Solution {
public:
    int singleNumber(vector<int>& a) {
        map < int, int > mp; 
        int ans = 0; 
        for ( int i = 0; i < a.size(); i++ ) 
            mp[a[i]]++; 
        
        for ( auto x : mp ) {
            if ( x.second == 1 ) 
                ans = x.first;
        }
        return ans;
    }
};