class Solution { 
public: 
    vector<int> replaceElements(vector<int>& arr) { 
        if ( arr.size() == 1 ) 
            return vector < int > {-1}; 
        
        int val = arr.back(); 
        for ( int i = arr.size()-1; i >= 0; i-- ) {
            swap(arr[i], val); 
            val = max(arr[i], val); 
        }
        
        arr[arr.size()-1] = -1;
        return arr;
    } 
}; 