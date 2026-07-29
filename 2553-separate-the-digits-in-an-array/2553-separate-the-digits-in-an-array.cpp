class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
         vector<int> FinalAns;
       
        for(int i=0;i<n;i++){
             vector<int> ans;
              while(nums[i]>0){
                int remainder=nums[i]%10;
                ans.push_back(remainder);
                nums[i]/=10;
              }
              reverse(ans.begin(),ans.end());
              for(int i=0;i<ans.size();i++){
                FinalAns.push_back(ans[i]);
              }
        }
        return FinalAns;
    }
};