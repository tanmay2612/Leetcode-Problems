class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
         int n=nums.size();
         for(int i=0;i<n;i++){
             mp[nums[i]]=0;
         }
         bool ans=true;
         int num=1;
         while(ans){
                if(mp.find(k*num)!=mp.end()){
                    num++;
                }
                else{
                    ans=false;
                }
         }
         return num*k;
    }
};