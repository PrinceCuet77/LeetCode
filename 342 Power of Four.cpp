class Solution {
public:
    bool isPowerOfFour(int num) {
        if ( num <= 0 ) return false;
        
        double d = log10(num) / log10(4);
        if ( abs(d - int(d)) > 0 ) return false;
        else return true;
    }
};
