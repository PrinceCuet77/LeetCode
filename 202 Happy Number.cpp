class Solution {
public:
    bool isHappy(int n) {
        map < int, int > mp; 
        mp[n]++;
        while ( 1 ) {
            int sum = 0; 
            
            while ( n ) {
                int temp = n % 10; 
                sum += (temp * temp);
                n /= 10;
            }
            
            mp[sum]++;
            n = sum;
            if ( n == 1 ) 
                return true;
            if ( mp[n] > 1 ) 
                return false;
        }
        
    }
};