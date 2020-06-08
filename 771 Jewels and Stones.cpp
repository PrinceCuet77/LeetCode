class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map < int, int > mp; 
        for ( auto j : J ) 
            mp[j]++;
        
        int ans = 0;
        for ( auto s : S ) {
            if ( mp[s] > 0 ) 
                ans++;
        }
        
        return ans;
    }
};
