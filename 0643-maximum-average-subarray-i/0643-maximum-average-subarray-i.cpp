class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        double maxsum = INT_MIN;

        double currsum = 0;
        for (int i = 0; i < k; i++) {
            currsum += nums[i];
        }
        if (currsum > maxsum) {
            maxsum = currsum;
        }
        if (n > k) {
            int j = 0;
            for (int i = k; i < n; i++) {

                currsum = currsum + nums[i] - nums[j];
                j++;
                if (currsum > maxsum) {
                    maxsum = currsum;
                }
            }
        }

        return (maxsum / k);
    }
};