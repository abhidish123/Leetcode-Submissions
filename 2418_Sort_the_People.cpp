class Solution {
public:
    
    static bool comp(pair<int, string> f, pair<int, string> s) {
        return f.first > s.first;
    }
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int,string>> vec;
        
        int n = names.size();
        
        for(int i = 0; i<n; ++i){
            vec.emplace_back(heights[i], names[i]);
        }
        
        // sort in desc order by heights
        sort(vec.begin(), vec.end(), comp);
    
        vector<string> ans;
        for(int i=0; i<n; ++i){
            ans.push_back(vec[i].second);
        }
        
        return ans;
    }
};
