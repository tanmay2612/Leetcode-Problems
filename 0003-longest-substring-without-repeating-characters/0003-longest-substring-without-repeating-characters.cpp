class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int size=0;
        string ans="";
        unordered_map<char,int> mp;
        for(int right=0;right<n;right++){
            if(mp.find(s[right])==mp.end()){
                mp[s[right]]=right;
            }
            else{
            while(mp.find(s[right])!=mp.end()){
                mp.erase(s[left]);
                left++;
            }
            mp[s[right]]=right;
            }
            int curr=right-left+1;
          if(curr>size){
            size=curr;
            ans=s.substr(left,size);
          }
        }
        cout<<ans;
        return size;
    }
};