class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        int left = 0;
        int right = 0;
        int ans = 0;
        int maxlen = 0;
        int start = 0;

        while (right < n) {
            char ch = s[right];
            if (mp.count(ch)) {
                left = max(left, mp[ch] + 1);
            }
            mp[ch] = right;
            ans = max(ans, right - left + 1);

            if (maxlen < right - left + 1) {
                maxlen = right - left + 1;
                start = left;
            }

            right++;
        }
        cout << s.substr(start, maxlen);
        return ans;
    }
};