class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int maxi = nums[0];
        vector<int> ans;
        for (int i = 0; i < n; i++) {

            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second > n / 3) {
                maxi = it.first;
                ans.push_back(maxi);
            }
        }
        return ans;
    }
};