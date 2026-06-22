class Solution {
public:
    int maxArea(vector<int>& nums) {
        int area = 0;
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        // int height = nums[0];
        int temp = 0;
        while (i < j) {
            if (nums[i] <= nums[j]) {
                temp = nums[i] * (j - i);
            } else if (nums[j] <= nums[i]) {
                temp = nums[j] * (j - i);
            }if (temp >= area) {
                area = temp;
            }
            
           if(nums[i]<nums[j]){
            i++;
           }
           else{
            j--;
           }
            
        }
        return area;
    }
};