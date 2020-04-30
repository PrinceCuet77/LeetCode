class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int mat[n][m]; 
        memset(mat, 0, sizeof(mat)); 
        
        for ( int i = 0; i < indices.size(); i++ ) { 
            int row = indices[i][0], col = indices[i][1]; 
            for ( int k = 0; k < m; k++ ) 
                mat[row][k] += 1; 
            
            for ( int k = 0; k < n; k++ ) 
                mat[k][col] += 1; 
        }
        
        int cnt = 0;
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                if ( mat[i][j] & 1 ) 
                    cnt++; 
            }
        } 
        
        return cnt;
    }
};