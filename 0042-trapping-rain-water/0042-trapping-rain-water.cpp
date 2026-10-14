class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left_maxi=height[0];
        int right_maxi=height[n-1];
        //creating vector for every elements maximum height at left side
        vector<int> left(n,0);
        for(int i=1;i<n;i++){
            left[i]=max(left_maxi,height[i]);
            if(left_maxi<height[i]){
                left_maxi=height[i];
            }
        }
        //creating vector for every elements maximum height at right side
        vector<int>right(n,0);
        for(int i=n-2;i>=0;i--){
            right[i]=max(right_maxi,height[i]);
            if(right_maxi<height[i]){
                right_maxi=height[i];
            }
        }
        //calculation of trapped rain water
        int ans=0;
        for(int i=1;i<n-1;i++){
            int curr=min(left[i],right[i])-height[i];
            ans+=curr;
        }
        return ans;
    }
};