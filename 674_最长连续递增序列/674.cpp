class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size == 0) {
            return 0;
        }
        int ans = 1;
        vector<int> dp(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                dp[i] = dp[i - 1] + 1;
            }
            if (dp[i]>ans) {
                ans = dp[i];
            }
    }
    return ans;
    }
};