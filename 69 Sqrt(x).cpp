class Solution {
public:
    int mySqrt(int x) {
        if ( x == 1 ) 
            return x; 
        
        long long low = 0, high = x, mid; 
        for ( int i = 0; i < 50; i++ ) {
            mid = (low + high) / 2; 
            if ( mid * mid > x ) 
                high = mid; 
            else if ( mid * mid < x ) 
                low = mid; 
            else 
                break; 
        }
        
        return (int)mid;
    }
};