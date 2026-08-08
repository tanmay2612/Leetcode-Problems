class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }
        int max = 0;
        int ans = nums[0];
        for (auto it : freq) {
            int curr = it.second;
            if (curr > max) {
                max = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};