class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == 0) {
                j = i;
                for (int k = j; k < n - 1; k++) {
                    swap(nums[k], nums[k + 1]);
                }
            }
        }
    }
};