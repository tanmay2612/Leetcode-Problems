class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int n = s.size();
        int left = 0;
        int right = 0;
        int count = 0;
        for (int right = 0; right < n; right++) {

            int curr = 0;
            if (mp.empty()) {
                mp[s[right]] = right;
                curr = right - left+1;
            } else {
                if (mp.find(s[right]) == mp.end()) {
                    mp[s[right]] = right;
                } else {
                    left = max(left,mp[s[right]] + 1);
                    mp[s[right]] = right;
                }
                curr = right - left + 1;
            }
            if (curr > count) {
                count = curr;
            }
        }
        return count;
    }
};