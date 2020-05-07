/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        queue < int > q; 
        q.push(id); 
        
        int ans = 0; 
        while ( !q.empty() ) {
            auto u = q.front(); 
            q.pop(); 
            
            for ( auto x : employees ) {
                if ( x->id == u ) {
                    ans += x->importance; 
                    
                    for ( auto v : x->subordinates ) 
                        q.push(v);
                }
            }
        }
        
        return ans; 
    }
};
