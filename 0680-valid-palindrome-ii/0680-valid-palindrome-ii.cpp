class Solution {
public:
    bool checkPalindrome(string &s, int i, int j) {
        int n = s.length();
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else if (s[i] != s[j]) {
                bool case1 = checkPalindrome(s, i, j - 1);
                bool case2 = checkPalindrome(s, i + 1, j);
                bool final = (case1 || case2);
                return final;
            }
        }
        return true;
    }
};