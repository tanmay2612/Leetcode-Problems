class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0 && mp.count(nums[i])!=1) {
               mp[nums[i]]=i;
            }
        }
        int ans = 1;
        for (auto it : mp) {
            if (mp.find(ans) == mp.end()) {
                return ans;
            }
            ans++;
        }

        return ans ;
    }
};