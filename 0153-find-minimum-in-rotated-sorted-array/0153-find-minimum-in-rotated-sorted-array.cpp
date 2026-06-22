class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int ans=nums[0];
        while(s<=e){
            int mid=s+(e-s)/2;
            int curr=0;
            // if(nums.size()==1){
            //     return nums[s];
            // }
            // else if(s==e){
            //     curr=nums[mid];

            // }
            if(nums[mid]>=nums[s]){
                 curr=nums[s];
                 s=mid+1;
            }
            else if(nums[e]>nums[mid]){
                  curr=nums[mid];
                  e=mid-1;
            }
            else{
                s=mid+1;
            }
            if(curr<ans){
                ans=curr;
            }
            
        }
        return ans;
    }
};