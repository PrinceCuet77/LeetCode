class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if ( A.size() < 3 ) 
            return true; 
        bool flag = false; 
        for ( int i = 0; i < A.size()-1; i++ ) {
            if ( A[i] > A[i+1] ) {
                flag = true; 
                break;
            }
        }
        
        if ( !flag ) {
            return true;
        } else {
            for ( int i = 0; i < A.size()-1; i++ ) {
                if ( A[i] < A[i+1] ) {
                    flag = false;
                    break;
                }
            }
            
            if ( flag ) 
                return true;
            else 
                return false;
        }
    }
};