class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector < int > v; 
        map < int, int > mp; 
        for ( int i = 0; i < a.size(); i++ ) 
            mp[a[i]]++;
        
        for ( auto x : mp ) {
            if ( x.second > 1 ) 
                v.push_back(x.first);
        }
        return v;
    }
};