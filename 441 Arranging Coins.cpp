class Solution {
public:
    int arrangeCoins(int n) {
        long long total = 0, cnt = 1;
        while ( 1 ) {
            total += cnt;
            if ( total > n ) 
                return cnt-1;
            else if ( total == n ) 
                return cnt;
            cnt++;
        }
    }
};