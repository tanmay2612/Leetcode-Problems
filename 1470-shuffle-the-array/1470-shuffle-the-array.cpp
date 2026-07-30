class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=nums.size();
        int l=0;
        int m=l+n;
        vector<int> ans;
        for(int i=0;i<k;i++){
            if(i&1){
            ans.push_back(nums[m]);
            m++;
            }
            else{
              ans.push_back(nums[l]);
              l++;
            }
        }
        return ans;
    }
};