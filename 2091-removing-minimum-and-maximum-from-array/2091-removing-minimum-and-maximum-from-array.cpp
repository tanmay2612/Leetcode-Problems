class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int maxindex = 0;
        int minindex = 0;
        int mini = INT_MAX;
        int k = nums.size();
        for (int i = 0; i < k; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                minindex = i;
            }
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxindex = i;
            }
        }
        int n = min(minindex, maxindex);
        int m = max(minindex, maxindex);

        int fromleft = 1 + m;
        int fromright = k - n;
        int fromboth =k-m+n+1;
     
        return min({fromleft,fromright,fromboth});
    }
};