class Solution {
public:
    string decodeMessage(string key, string message) {
        int n = message.length();
        int m = key.length();
        string ans = "";
        unordered_map<char, char> mp;
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (key[i] == ' ') {
                continue;
            }
            if (mp.find(key[i]) == mp.end()) {
                mp[key[i]] = 'a' + count;

                count++;
            }
        }
        for (int i = 0; i < n; i++) {
            char ch = message[i];
            if (ch == ' ')
                ans += ' ';
            else
                ans += mp[ch];
           
        }
        return ans;
    }
};