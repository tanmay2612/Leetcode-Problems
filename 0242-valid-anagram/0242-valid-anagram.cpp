class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            mp[ch]++;
        }
        for (int i = 0; i < m; i++) {
            char ch = t[i];
            mp[ch]--;
        }
        for (auto it : mp) {
            if (it.second != 0) {
                return false;
            }
        }
        return true;
    }
};