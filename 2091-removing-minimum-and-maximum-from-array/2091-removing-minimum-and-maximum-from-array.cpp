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
                maxindex = i;
            }
            if (nums[i] > maxi) {
                maxi = nums[i];
                minindex = i;
            }
        }
        int n = min(minindex, maxindex);
        int m = max(minindex, maxindex);
        int fromleft = 1 + m;
        int fromright = k - n;
        int ans=min(fromleft,fromright);
        int fromboth1 = 1 + n;
        int fromboth2 = k - m;
        int fromboth = fromboth1 + fromboth2;
        ans=min(ans,fromboth);
        return ans;

        // int fromright = 1;
        // int twos = 0;
        // for (int i = 0; i < n; i++) {
        //     if (twos <= 2) {
        //         if (nums[i] == maxi || nums[i] == mini) {
        //             twos++;
        //         }
        //         fromright++;
        //     }
        //     twos = 0;
        //     break;
        // }
        // int fromleft = 1;
        // for (int i = n - 1; i >= 0; i--) {
        //     if (twos <= 2) {
        //         if (nums[i] == maxi || nums[i] == mini) {
        //             twos++;
        //         }
        //         fromleft++;
        //     }
        //     twos = 0;
        //     break;
        // }
        // int fromboth1 = 1;
        // int fromboth2 = 1;
        // for (int i = n - 1; i >= 0; i--) {
        //     if (twos <= 1) {
        //         if (nums[i] == maxi || nums[i] == mini) {
        //             twos++;
        //         }
        //         fromboth2++;
        //     }
        //     twos = 0;
        //     break;
        // }
        // for (int i = 0; i < n; i++) {
        //     if (twos <= 1) {
        //         if (nums[i] == maxi || nums[i] == mini) {
        //             twos++;
        //         }
        //         fromboth1++;
        //     }
        //     break;
        // }
        // int fromboth = fromboth1 + fromboth2;

        // int ans = min(fromleft, fromright);
        // ans = min(ans, fromboth);
        // return ans;
    }
};