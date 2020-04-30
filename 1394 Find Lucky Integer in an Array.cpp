class Solution {
public:
    int findLucky(vector<int>& a) {
        map < int, int > mp; 
        for ( int i = 0; i < a.size(); i++ ) 
            mp[a[i]]++;
        
        bool flag = false; 
        int ans = 0; 
        for ( auto x : mp ) {
            if ( x.first == x.second ) {
                flag = true; 
                ans = x.first; 
            }
        }
        
        if ( flag ) 
            return ans; 
        else 
            return -1;
    }
};