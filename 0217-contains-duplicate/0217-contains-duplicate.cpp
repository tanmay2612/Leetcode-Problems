class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
         if (mp.find(nums[i]) != mp.end())
            return true;

        mp[nums[i]] = 1;
        }
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     if((it->second)>1){
        //         return true;
        //     }
        // }
       
        return false;
    }
};