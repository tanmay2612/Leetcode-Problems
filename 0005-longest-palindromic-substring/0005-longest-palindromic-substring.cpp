class Solution {
public:
    string maxlength(string& s, int i, int j) {

        int n = s.length();
        while (i >= 0 && j < n && s[i] == s[j]) {
            i--;
            j++;
        }
        return s.substr(i + 1, j - i - 1);
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";
        if (n == 0) {
            return "";
        }
        for (int c = 0; c < n; c++) {
            string odd = maxlength(s, c, c);
            if (odd.length() > ans.length()) {
                ans = odd;
            }

            string even = maxlength(s, c, c + 1);
            if (even.length() > ans.length()) {
                ans = even;
            }
        }
        return ans;
    }
};