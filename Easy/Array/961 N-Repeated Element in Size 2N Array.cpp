class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int,int> m; 
        int store;
        for ( int x : A ) {
            m[x]++;
            if ( m[x] > 1 ) {
                store = x; 
                break;
            }
        }
        return store;
    }
};