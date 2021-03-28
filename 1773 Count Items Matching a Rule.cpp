class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0, index; 
        if ( ruleKey == "type" ) index =  0; 
        else if ( ruleKey == "color" ) index = 1; 
        else if ( ruleKey == "name" ) index = 2;
        
        for ( auto ar : items ) 
            if ( ar[index] == ruleValue ) cnt++;
        
        return cnt; 
    }
};
