class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = strs[0];
        string copy = "";

        for (int i = 0; i < n; i++) {
            if (strs[i] == "") {
                return "";
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < ans.length(); j++) {
                if (ans[j] == strs[i][j]) {
                    copy += strs[i][j];
                }
                else{
                    break;
                }
            }
            ans = copy;
            copy.clear();
        }
        return ans;
    }
};