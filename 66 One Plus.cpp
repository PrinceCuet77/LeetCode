class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if ( digits[digits.size()-1] != 9 ) {
            digits[digits.size()-1]++;
            return digits;
        }
        
        bool flag = false;
        for ( int i = digits.size()-1; i >= 0; i-- ) {
            if ( digits[i] != 9 ) {
                if ( flag ) {
                    digits[i]++;
                    break;
                }
            } 
            else {
                digits[i] = 0;
                flag = true;
            }
        }
        
        if ( digits[0] == 0 ) 
            digits.insert(digits.begin(), 1);
        
        return digits;
    }
};