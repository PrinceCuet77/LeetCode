class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int lastMeeting;
        for ( int i = 0; i < bits.size(); i++ ) {
            lastMeeting = bits[i]; 
            if ( bits[i] == 1 ) 
                i++; 
        }
        
        return !lastMeeting ? true : false;
    }
};