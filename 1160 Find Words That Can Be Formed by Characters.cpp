class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map < char, int > mp, ch; 
        for ( char c : chars ) 
            ch[c]++;
        
        int cnt = 0;
        for ( int i = 0; i < words.size(); i++ ) {
            bool flag = true;
            map < char, int > copymp = ch;
            
            for ( auto c : words[i] ) {
                if ( copymp[c] <= 0 ) {
                    flag = false; 
                    break; 
                }
                copymp[c]--;
            }
            if ( flag ) {
                cnt += words[i].size();
            }
        }
        
        return cnt; 
    }
};
