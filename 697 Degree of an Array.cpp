class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map < int, int > mp; 
        for ( int x : nums ) 
            mp[x]++; 
        
        int most = 0; 
        for ( auto x : mp ) 
            most = max(x.second, most); 
        
        vector < int > v;
        for ( auto x : mp ) {
            if ( x.second == most ) 
                v.push_back(x.first); 
        }
        
        int cnt = 1e5; 
        for ( int i = 0; i < v.size(); i++ ) {
            int starting; 
            for ( int j = 0; j < nums.size(); j++ ) {
                if ( nums[j] == v[i] ) {
                    starting = j;
                    break;
                }
            }
            
            int ending; 
            for ( int j = nums.size()-1; j >= 0; j-- ) {
                if ( nums[j] == v[i] ) {
                    ending = j; 
                    break; 
                }
            }
            
            cnt = min(cnt, (ending-starting)); 
        }
        
        return cnt+1;
    }
};