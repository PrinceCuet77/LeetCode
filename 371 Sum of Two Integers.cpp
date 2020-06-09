class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0, sum = 0;
        for ( int i = 0; i < 32; i++ ) {
            int aBit = (a & 1 << i); 
            int bBit = (b & 1 << i); 
            
            int carryBit = (carry << i); 
            sum |= (aBit ^ bBit ^ carryBit); 
            
            carry = aBit & carryBit || bBit & carryBit || aBit & bBit;
        }
        
        return sum;
    }
};
