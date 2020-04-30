class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        if ( prices.size() == 0 )
            return 0;
        
        for ( int i = 0; i < prices.size()-1; i++ ) {
            for ( int j = i+1; j < prices.size(); j++ ) {
                if ( prices[i] < prices[j] ) {
                    int t = prices[j] - prices[i];
                    if ( t > profit ) 
                        profit = t;
                }
            }
        }
        
        return profit;
    }
};