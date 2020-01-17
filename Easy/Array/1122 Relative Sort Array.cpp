class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map < int, int > mp; 
        for ( int i = 0; i < arr1.size(); i++ ) 
            mp[arr1[i]]++;
        
        vector < int > vec; 
        for ( int i = 0; i < arr2.size(); i++ ) {
            int k = mp[arr2[i]]; 
            for ( int j = 0; j < k; j++ ) 
                vec.push_back(arr2[i]);
            mp.erase(arr2[i]);
        }
        
        for ( auto x : mp ) {
            int k = x.second;
            for ( int i = 0; i < k; i++ ) 
                vec.push_back(x.first);
        }
        
        return vec;
    }
};