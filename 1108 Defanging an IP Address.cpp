class Solution {
public:
    string defangIPaddr(string address) {
        string ch = "";
        for ( auto x : address ) {
            if ( x == '.' ) {
                ch += '[';
                ch += x;
                ch += ']';
            }
            else 
                ch += x;
        }
        
        return ch;
    }
};
