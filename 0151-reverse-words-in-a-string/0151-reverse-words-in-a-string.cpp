class Solution {
public:
    string ValidString(string s) {
        string t = "";
        int i = 0;
        int n = s.size();
        int j = n - i - 1;
        while (i < n && s[i] == ' ') {
            i++;
        }
        while (j >= 0 && s[j] == ' ') {
            j--;
        }

        while (i <= j) {
            if (s[i] != ' ') {
                t += s[i];
                i++;
            } else if (i + 1 <= j && s[i] == ' ' && s[i + 1] != ' ') {
                t += s[i];
                i++;
            } else {
                i++;
            }
        }
        return t;
    }

    string reverseWords(string s) {
        string ans = ValidString(s);
        int n = ans.size();
        for (int i = 0; i < n / 2; i++) {
            swap(ans[i], ans[n - i - 1]);
        }
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == ' ') {
                reverse(ans.begin() + k, ans.begin() + i);
                k = i + 1;
            }
            else if(i==n-1){
                reverse(ans.begin() + k, ans.begin() + i+1);
            }
        }
        return ans;
    }
};