class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector < bool > checker; 
        
        int prev = 0; 
        for ( int x : A ) {
            prev = 2 * prev + x; 
            prev %= 10; 
            checker.push_back(prev % 5 == 0);
        }
        
        return checker; 
    }
};