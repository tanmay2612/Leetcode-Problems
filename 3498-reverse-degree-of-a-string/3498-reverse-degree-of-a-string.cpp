class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int count = 0;
        unordered_map<char, int> mp;
        for (int i = 1; i <= 26; i++) {
            mp['z' - count] = i;
            count++;
        }
        for (int i = 0; i < s.size(); i++) {
            int product = mp[s[i]] * (i + 1);
            sum+= product;
        }
        return sum;
    }
};