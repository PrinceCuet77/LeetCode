class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap < int, int > mp; 
        for ( int i = 0; i < mat.size(); i++ ) {
            int cnt = 0; 
            for ( int j = 0; j < mat[i].size(); j++ ) {
                if ( mat[i][j] == 1 ) 
                    cnt++; 
                else 
                    break;
            }
            mp.insert(make_pair(cnt, i)); 
        }
        
        vector < int > v; 
        int cnt = 1;
        for ( auto x : mp ) {
            if ( cnt > k ) 
                break; 
            cnt++; 
            v.push_back(x.second); 
        }
        
        return v;
    }
};