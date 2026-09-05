class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int diff=INT_MAX;
        for(int i=0;i<=n-3;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if( abs(sum-target) < diff){
                    ans=sum;
                    diff=abs(sum-target);
                }
                if(sum<=target){
                     j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};