class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(max1<=nums[i]){
                max2=max1;
                max1=nums[i];
            }
            else if(max2<nums[i] && nums[i]<max1){
                max2=nums[i];
            }
        }
        cout<<max1<<" "<<max2;
        int ans=(max1-1)*(max2-1);
        return ans;
    }
};