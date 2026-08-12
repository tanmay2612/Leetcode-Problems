class Solution {
public:
    int valid(vector<int> nums, int n, int ans) {


        for (int i = 0; i < n; i++) {

            if (ans == nums[i]) {
                return valid(nums, n, ans+1);
            }
        }
        return ans;
    }

    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            int curr = nums[i - 1];
            while (i < n && nums[i] == nums[i - 1] + 1) {
                curr += nums[i];
                i++;
            }
            ans = max(ans, curr);
            break;
        }
        return valid(nums, n, ans);
    }
};