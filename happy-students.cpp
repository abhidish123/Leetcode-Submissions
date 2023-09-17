class Solution {
public:
    
    int countHappyStudents(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        
        // check if all can be selected
        bool ok = true;
        for(int i = 0; i < n; ++i) {
            if(nums[i] >= n) ok = false; 
        }
        
        if(ok) ans++;
        
        // check if none can be selected
        ok = true;
        for(int i = 0; i < n; ++i) {
            if(nums[i] == 0) ok = false; 
        }
        
        if(ok) ans++;
        
        // check if a group can be selected
        sort(nums.begin(), nums.end());
        ok = false;
        for(int i = 0; i < n - 1; ++i) {
            if(i + 1 > nums[i] && (i + 1 < nums[i+1])) ans++;
        }

        return ans;
    }
    
    int countWays(vector<int>& nums) {
        return countHappyStudents(nums);
    }
};
