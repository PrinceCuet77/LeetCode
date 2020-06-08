class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = candies[0];
        for ( int i = 1; i < candies.size(); i++ ) 
            mx = max(mx, candies[i]);
        
        vector < bool > v; 
        for ( auto x : candies ) {
            if ( x + extraCandies >= mx )
                v.push_back(true);
            else 
                v.push_back(false);
        }
        
        return v;
    }
};
