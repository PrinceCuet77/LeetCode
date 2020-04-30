class Solution {
public:
    vector<int> sumZero(int n) {
        int t = n / 2; 
        vector < int > result;
        for ( int i = 1; i <= t; i++ ) {
            result.push_back(i);
            result.push_back(-i);
        }
        
        if ( n % 2 )
            result.push_back(0);
        
        return result;
    }
};