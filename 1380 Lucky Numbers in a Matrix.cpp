class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector < int > minimum, maximum, lucky; 
        
        int col; 
        for ( int i = 0; i < matrix.size(); i++ ) {
            int mi = 1e6;
            for ( int j = 0; j < matrix[i].size(); j++ ) 
                mi = min(mi, matrix[i][j]); 
            
            minimum.push_back(mi); 
            col = matrix[i].size(); 
        } 
        
        for ( int i = 0; i < col; i++ ) { 
            int ma = 0; 
            for ( int j = 0; j < matrix.size(); j++ ) 
                ma = max(ma, matrix[j][i]);
            
            maximum.push_back(ma);
        } 
        
        for ( int i = 0; i < matrix.size(); i++ ) {
            for ( int j = 0; j < matrix[i].size(); j++ ) { 
                if ( minimum[i] == maximum[j] ) 
                    lucky.push_back(maximum[j]); 
            }
        }
        
        return lucky;
    }
};