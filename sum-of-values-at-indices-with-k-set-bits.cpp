class Solution {
public:
    bool check(int x, int k) {
        int c = 0;
        while(x) {
            x &= (x-1);
            c++;
        }
        if(c == k) return true;
        return false;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int ans = 0;
        for(int i=0; i < nums.size(); ++i) {
            if(check(i, k)) ans += nums[i]; 
        }
        
        return ans;
    }
};
