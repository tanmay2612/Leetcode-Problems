class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int prevsum=0;
        for(int i=0;i<n;i++){
            ans[i]=prevsum;
            prevsum+=nums[i];
        }
        int aftersum=0;
        for(int i=n-1;i>=0;i--){
             ans[i]=abs(ans[i]-aftersum);
             aftersum+=nums[i];
        }
        return ans;
    }
};