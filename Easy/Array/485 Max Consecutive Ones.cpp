class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, cnt = INT_MIN;
        for ( int x : nums ) {
            if ( x ) 
                count++; 
            else {
                if ( cnt < count ) 
                    cnt = count; 
                count = 0;
            }
        }
        if ( cnt < count ) 
            cnt = count;
        
        return cnt;
    }
};