class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        float ans = 0;
        vector<double> temp;
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n) {
            temp.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            temp.push_back(nums2[j]);
            j++;
        }
        int s=0;
        int e=temp.size()-1;
        int mid=s+(e-s)/2;
        if(temp.size()&1){
            ans=temp[mid];
        }else{
        ans = (temp[mid] + temp[mid + 1]) / 2;
        }
        return ans;
    }
};