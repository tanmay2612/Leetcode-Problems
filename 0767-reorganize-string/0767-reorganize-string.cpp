class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int maxi = 0;
        char maxch;
        for (int i = 'a'; i <= 'z'; i++) {
            int curr = 0;
            curr = mp[i];
            if (curr > maxi) {
                maxi = curr;
                maxch = i;
            }
        }

        if (maxi > (n + 1) / 2) {
            s.clear();
        } else {
            int j = 0;
            while (mp[maxch] > 0 && j < n) {
                s[j] = maxch;
                mp[maxch]--;
                j += 2;
            }

            for (int i = 'a'; i <= 'z'; i++) {
                if (i == maxch) {
                    continue;
                }
                while (mp[i] > 0) {
                    if (j >= n) {
                        j = 1;
                    }
                    s[j] = i;
                    mp[i]--;
                    j += 2;
                }
            }
        }

        return s;
    }
};