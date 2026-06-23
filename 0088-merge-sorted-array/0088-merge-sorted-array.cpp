class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m-1;i>=m-n;i--){
             nums1.pop_back();
        }
        int j=0;

        for(int i=0;i<n;i++){
             nums1.push_back(nums2[j]);
             j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};