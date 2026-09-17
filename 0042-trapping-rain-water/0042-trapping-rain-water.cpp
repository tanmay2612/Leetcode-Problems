class Solution {
public:

    // not optimal

    // int findleft(int a, vector<int> height) {
    //     int maxleft = height[a];
    //     for (int i = 0; i < a; i++) {
    //         if (height[i] > maxleft) {
    //             maxleft = height[i];
    //         }
    //     }
    //     return maxleft;
    // }

    // int findright(int b, vector<int> height) {
    //     int maxright = height[b];
    //     for (int i = b + 1; i < height.size(); i++) {
    //         if (height[i] > maxright) {
    //             maxright = height[i];
    //         }
    //     }
    //     return maxright;
    // }

    int trap(vector<int>& height) {
        int n = height.size();

        int ans = 0;
        int max_heightLeft = height[0];
        int max_heightRight = height[n - 1];
//optimal way
        vector<int> left(n, 0);
        for (int i = 1; i < n; i++) {
            left[i] = max(max_heightLeft, height[i]);
            max_heightLeft = left[i];
        }

        vector<int> right(n, 0);
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(height[i], max_heightRight);
            max_heightRight = right[i];
        }

        for (int i = 1; i < n - 1; i++) {
            // int j = findleft(i, height);
            // int k = findright(i, height);
            int curr = 0;
            curr = min(left[i], right[i]) - height[i];
            ans += curr;
        }
        return ans;
    }
};