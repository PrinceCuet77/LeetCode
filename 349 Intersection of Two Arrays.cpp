class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map < int, int > mp1, mp2;
        for ( int x : nums1 )
            mp1[x]++;

        for ( int x : nums2 )
            mp2[x]++;

        vector < int > vec;
        /* Another way to solve but it takes a lot of time in LeetCode online judge
        if ( mp1.size() < mp2.size() ) {
            for ( auto x : mp1 ) {
                if ( mp2[x.first] )
                    vec.push_back(x.first);
            }
        } else {
            for ( auto x : mp2 ) {
                if ( mp1[x.first] )
                    vec.push_back(x.first);
            }
        }*/

        map < int, int > :: iterator it;
        if ( mp1.size() < mp2.size() ) {
            for ( it = mp1.begin(); it != mp1.end(); it++ ) {
                if ( mp2[it->first] > 0 )
                    vec.push_back(it->first);
            }
        } else {
            for ( it = mp2.begin(); it != mp2.end(); it++ ) {
                if ( mp1[it->first] > 0 )
                    vec.push_back(it->first);
            }
        }

        return vec;
    }
};
