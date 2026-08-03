class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int curr = 0;
            while (i<n && nums[i] == 1) {
                curr++;
                i++;
            }
            if(curr>count){
                count=curr;
            }
        }
        return count;
    }
};