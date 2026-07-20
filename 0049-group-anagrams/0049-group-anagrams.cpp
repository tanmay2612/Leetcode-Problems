class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
      
       unordered_map <string, vector<string>> mp;
        vector<vector<string>> ans;
       for(string str : strs){
         vector<int> freq(150,0);
        for(char ch : str){
            freq[ch]++;
        }
        string key="";
        for(int& x : freq){
            key+=to_string(x);
            key+=',';
        }
        
        mp[key].push_back(str);
       }
       for(auto& it : mp){
           ans.push_back(it.second);
       }
       return ans;
    }
};