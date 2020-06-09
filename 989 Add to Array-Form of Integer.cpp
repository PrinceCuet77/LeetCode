class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        for ( int i = A.size()-1; i >= 0; i-- ) {
            int t = K % 10 + A[i];
            A[i] = t % 10;
            K = (K / 10) + (t > 9);
            if ( !K ) break;
        }    
        
        if ( K ) {
            string ch = to_string(K);
            vector < int > v(ch.size(), 0); 
            for ( int i = ch.size()-1; i >= 0; i-- ) 
                v[i] = ch[i] - '0';
            
            move(A.begin(), A.end(), back_inserter(v));
            return v;
        }
        
        return A;
    }
};
