class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int mini=nums[0];
        int maxi=nums[0];
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }

        while(maxi>0 && mini>0){
            if(maxi>=mini){
                maxi%=mini;
            }
            else{
                mini%=maxi;
            }
        }

        return max(maxi,mini);
    }
};