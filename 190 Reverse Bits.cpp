class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector < int > v; 
        for ( int i = 0; i < 32; i++ ) {
            if ( n & (1 << i) )
                v.push_back(1);
            else 
                v.push_back(0);
        }
        
        uint32_t t = 0;
        int m = 31; 
        for ( int i = 0; i < v.size(); i++ ) {
            t += (v[i] * pow(2, m));
            m--;
        }
        
        return t;
    }
};
