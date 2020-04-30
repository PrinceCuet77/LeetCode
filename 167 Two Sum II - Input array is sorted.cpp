class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for ( int i = 0; i < numbers.size(); i++ ) {
            if ( binary_search(numbers.begin()+i+1, numbers.end(), target-numbers[i]) ) 
                return {i+1, upper_bound(numbers.begin()+i+1, numbers.end(), target-numbers[i]) - numbers.begin()}; 
        }
        
        return {};
    }
};