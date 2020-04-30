class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector < int > sortedA; 
        for ( int x : A ) 
            sortedA.push_back(x*x);
        sort(sortedA.begin(), sortedA.end()); 
        
        return sortedA;
    }
};