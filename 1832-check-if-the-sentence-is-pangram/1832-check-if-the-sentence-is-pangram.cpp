class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        unordered_map<char, int> mp;
        int count = 0;
        while (count < 26) {
            mp['a' + count] = 0;
            count++;
        }

        for (int i = 0; i < n; i++) {
            char ch = sentence[i];
            if (ch != ' ') {
                mp[ch]++;
            }
        }
        for (auto it : mp) {
            if (it.second == 0) {
                return false;
            }
        }
        return true;
    }
};