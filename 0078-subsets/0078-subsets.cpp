class Solution {
public:
    void find(vector<int>& nums, int i, vector<int>& temp,
              vector<vector<int>>& ans) {
        if (i >= nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        find(nums, i + 1, temp, ans);
        temp.pop_back();
        find(nums, i + 1, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        vector<int> temp = {};
        vector<vector<int>> ans;
        int n = nums.size();
        find(nums, i, temp, ans);
        return ans;
    }
};