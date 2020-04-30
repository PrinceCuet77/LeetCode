class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if ( A.size() < 3 )
            return false; 
        
        bool flag = true; 
        for ( int i = 0; i < A.size()-1; i++ ) {
            if ( A[i] == A[i+1] ) 
                return false;
            else if ( A[i] < A[i+1] ) {
                if ( !flag )
                    return false; 
            } else {
                flag = false;
                if ( i == 0 ) 
                    return flag; 
            }
        }
        
        if ( !flag ) 
            return true;
        else 
            return false;
    }
};