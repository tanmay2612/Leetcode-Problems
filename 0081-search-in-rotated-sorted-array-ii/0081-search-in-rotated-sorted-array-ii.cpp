class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return true;
            } else if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s++;
                e--;
            } else if (nums[mid] >= nums[s]) {
                if (target >= nums[s] && target < nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            } else if (nums[mid] <= nums[e]) {
                if (target <= nums[e] && target > nums[mid]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }
        return false;
    }
};