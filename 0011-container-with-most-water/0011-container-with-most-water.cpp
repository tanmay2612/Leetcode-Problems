class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int area=0;
        int max=0;
        while(i<j){
            if(nums[i]>=nums[j]){
               area=nums[j]*(j-i);
            }
            else{
                area=nums[i]*(j-i);
            }
            if(nums[j]<nums[i]){
                j--;
            }
            else {
                i++;
            }
            if(max<area){
                max=area;
            }
        }
        return max;
    }
};