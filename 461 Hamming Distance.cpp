class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0; 
        int d = x ^ y; 
        
        while ( d ) {
            cnt += (d & 1);
            d >>= 1;
        }
        
        return cnt;
    }
};
