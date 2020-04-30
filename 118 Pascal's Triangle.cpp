class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if ( numRows == 0 )
            return {};
        
        vector < vector < int > > triangle = {{1}}; 
        if ( numRows == 1 ) 
            return triangle;
        
        triangle.push_back({1, 1});
        if ( numRows == 2 ) 
            return triangle;
        
        for ( int i = 2; i < numRows; i++ ) {
            vector < int > singleTriangle; 
            singleTriangle.push_back(1);
            for ( int j = 1; j < i; j++ ) {
                singleTriangle.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            }
            singleTriangle.push_back(1);
            triangle.push_back(singleTriangle);
        }
        
        
        return triangle;
    }
};