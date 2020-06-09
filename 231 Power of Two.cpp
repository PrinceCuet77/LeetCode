class Solution {
public:
    bool isPowerOfTwo(int n) {
        if ( n <= 0 ) return false; 
        
        double d = log2(n);
        if ( abs(d - int(d)) > 0 ) return false; 
        return true;
    }
};
