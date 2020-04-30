class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0; 
        for ( auto x : nums ) {
            int t = log10(x)+1;
            if ( !(t & 1) )
                cnt++;
        }
        
        return cnt;
    }
};