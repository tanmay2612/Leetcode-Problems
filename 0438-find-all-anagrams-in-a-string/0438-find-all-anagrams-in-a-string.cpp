class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();

        unordered_map<char, int> mp;
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            mp[p[i]]++;
        }

        int i = 0;
        int j = m - 1;

        while (j < n) {
            if (i == 0) {
                for (int i = 0; i <= j; i++) {
                    mp[s[i]]--;
                }
            }
            else{
                mp[s[i - 1]]++;
                mp[s[j]]--;
            }

            bool push = true;
            for (auto it : mp) {
                if (it.second != 0) {
                    push = false;
                    break;
                } 
            }
            if (push) {
                ans.push_back(i);
            }
            i++;
            j++;
                
            
        }

        return ans;
    }
};