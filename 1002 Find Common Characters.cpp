class Solution {
public:
    string cmp(string& ch1, string& ch2) {
        string ch = ""; 
        unordered_map < char, int > mp; 
        for ( auto x : ch1 ) 
            mp[x]++;
        
        for ( auto x : ch2 ) {
            if ( mp[x] > 0 ) {
                ch += x;
                mp[x]--; 
                if ( mp[x] == 0 ) 
                    mp.erase(x);
            }
        }
        
        return ch;
    }
    
    vector<string> commonChars(vector<string>& A) {
        vector < string > v; 
        
        string ch = cmp(A[0], A[1]); 
        for ( int i = 2; i < A.size(); i++ ) 
            ch = cmp(ch, A[i]);
        
        for ( auto c : ch ) {
            string x = ""; 
            x += c; 
            v.push_back(x);
        }
        
        return v;
    }
};
