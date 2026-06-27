class Solution {
public:
    string mapping(string& s) {
        unordered_map<char, char> mp;
        string ans1 = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (mp.find(ch) == mp.end()) {
                mp[ch] = 'a' + count;
                count++;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            ans1 += mp[ch];
        }
        return ans1;
    }

    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        int n = pattern.length();
        unordered_map<char, char> up;
        vector<string> ans;
        int count = 0;
        string ans2 = "";
        for (int i = 0; i < n; i++) {
            char ch = pattern[i];
            if (up.find(ch) == up.end()) {
                up[ch] = 'a' + count;
                count++;
            }
        }
        for (int i = 0; i < n; i++) {
            char ch = pattern[i];
            ans2 += up[ch];
        }
        for (int i = 0; i < words.size(); i++) {
            if (ans2 == mapping(words[i])) {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};