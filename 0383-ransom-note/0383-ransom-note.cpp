class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        int n=ransomNote.length();
        int m=magazine.length();
        for(int i=0;i<n;i++){
            char ch=ransomNote[i];
            mp[ch]++;
        }
        for(int i=0;i<m;i++){
            char ch=magazine[i];
            mp[ch]--;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if((it->second)>0){
                return false;
            }
        }
        return true;

    }
};