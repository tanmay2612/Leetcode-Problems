class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n = nums.size();

        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;

        int negativeCount = 0;

        int Max1 = INT_MIN;
        int Max2 = INT_MAX;
        int Max3 = INT_MAX;

        int ans1=1;

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                negativeCount++;
            }
        }

        if (negativeCount >= 2) {

            for (int i = 0; i < n; i++) {
                if (nums[i] >= Max1) {
                    Max1 = nums[i];
                }
            }
            for (int i = 0; i < n; i++) {
                if (Max3 >= nums[i]) {
                    Max2 = Max3;
                    Max3 = nums[i];
                }
                if (Max3 < nums[i] && Max2 > nums[i]) {
                    Max2 = nums[i];
                }
            }
            
         ans1 = Max1 * Max2 * Max3;
        }
    

        for (int i = 0; i < n; i++) {

            if (nums[i] >= max1) {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            if (nums[i] < max1 && nums[i] >= max2) {
                max3 = max2;
                max2 = nums[i];
            }
            if (nums[i] < max2 && nums[i] >= max3) {
                max3 = nums[i];
            }
        }
        int ans2 = max1 * max2 * max3;
        if(negativeCount>=2){
            return max(ans1,ans2);
        }
        return ans2;
    }
};