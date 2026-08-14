class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<int, int> mp;

        int left = 0;
        int size = 1;

        for (int right = 0; right < n; right++) {

            mp[s[right]]++;

            while(mp[s[right]] > 2) {
                mp[s[left]]--;
                left++;
            }
            size = max(size, right - left + 1);

        }
        return size;
    }
};