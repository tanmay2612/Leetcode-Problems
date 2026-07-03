class Solution {
public:
    bool rotateString(string s, string goal) {
        unordered_map<char, int> mp;

        int n = s.length();
        int m = goal.length();

        if (m != n) {
            return false;
        } else {
            for (int i = 0; i < n; i++) {
                mp[s[i]]++;
            }
            for (int j = 0; j < m; j++) {
                mp[s[j]]--;
            }
            if (mp.empty()==0) {
                if (s == goal) {
                    return true;
                } else {
                    int count = 1;
                    while (count <= n - 1) {
                        for (int i = 0; i < n - 1; i++) {
                            swap(s[i], s[i + 1]);
                        }
                        if (s == goal) {
                            return true;
                        }
                        count++;
                    }
                }
            }
        }
        return false;
    }
};