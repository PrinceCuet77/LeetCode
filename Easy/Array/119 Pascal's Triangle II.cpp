class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector < vector < int > > triangle = {{1}}; 
        triangle.push_back({1, 1});
        
        for ( int i = 2; i < rowIndex+1; i++ ) {
            vector < int > singleTriangle; 
            singleTriangle.push_back(1);
            for ( int j = 1; j < i; j++ ) {
                singleTriangle.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            }
            singleTriangle.push_back(1);
            triangle.push_back(singleTriangle);
        }
        
        
        return triangle[rowIndex];
    }
};