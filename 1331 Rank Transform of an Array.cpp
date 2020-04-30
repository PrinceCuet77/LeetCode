class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set < int > st; 
        map < int, int > mp; 
        
        for ( int i = 0; i < arr.size(); i++ ) 
            st.insert(arr[i]); 
        
        int cnt = 1; 
        for ( auto x : st ) 
            mp[x] = cnt++;
        
        for ( int i = 0; i < arr.size(); i++ ) 
            arr[i] = mp[arr[i]]; 
        
        return arr;
    }
};