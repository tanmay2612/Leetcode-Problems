class Solution {
public:
    void findSubsets(vector<int>& nums, vector<int>& temp, set<vector<int>>& st, vector<vector<int>>& ans, int i) {
        if (i >= nums.size()) {
            if (st.find(temp) == st.end()) {
                ans.push_back(temp);
                st.insert(temp);
            }
            return;
        }
        temp.push_back(nums[i]);
        findSubsets(nums, temp, st, ans, i + 1);
        temp.pop_back();
        findSubsets(nums, temp, st, ans, i + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp = {};
        vector<vector<int>> ans;
        set<vector<int>> st;
        int i = 0;
        findSubsets(nums, temp, st, ans, i);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};