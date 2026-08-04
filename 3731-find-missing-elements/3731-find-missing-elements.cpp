class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]-1){
                int count=nums[i]+1;
                while(count<nums[i+1]){
                    ans.push_back(count);
                    count++;
                }
            
        }
    }
      return ans;
    }
};