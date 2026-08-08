class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int ans=0;
        unordered_map<char,int> mp;
        for(int right=0;right<n;right++){
            if(mp.empty()){
                mp[s[right]]=right;
            }
            else if(mp.count(s[right])){
                left=max(left,mp[s[right]]+1);    
            }
                        
                mp[s[right]]=right;
                ans=max(ans,right-left+1);
        }
        return ans;
    }
};