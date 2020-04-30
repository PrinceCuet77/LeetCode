class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int row = A.size(), col = A[0].size(); 
        vector < vector < int > > a(col); 
        
        for ( int i = 0; i < row; i++ ) {
            for ( int j = 0; j < col; j++ ) {
                a[j].push_back(A[i][j]); 
            }
        }
        
        return a; 
    }
};