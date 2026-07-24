class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        bool ans=false;

        if(n<=2){
            return true;
        }

       int count=0;
        for (int i = 0; i < n - 1; i++) {
            if(nums[i]<=nums[i+1]){
                ans=true;
            }
            else{
                count++;
            }
        }
        if(nums[0]<nums[n-1]){
            count++;
        }
        if(count>1){
            return false;
        }
       
        return ans;



    }
};