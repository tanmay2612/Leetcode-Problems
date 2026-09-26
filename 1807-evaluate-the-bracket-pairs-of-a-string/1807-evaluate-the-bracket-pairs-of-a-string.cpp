class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        int n = s.length();

        // O(N^2) less efficient

        // for (int i = 0; i < n; i++) {
        // while(s.find('(') != string::npos) {
        //     //start index
        //     int j = s.find('(') + 1;
        //     //end
        //     int k = s.find(')');
        //     //string to be replaced
        //     string temp = s.substr(j,k-j);
        //     //conditions
        //     if (mp.find(temp) != mp.end()) {
        //         s.replace(j-1, k-j+2, mp[temp]);
        //     } else {
        //         s.replace(j-1,k-j+2, "?");
        //     }
        // }
        // // }
        // return s;

        // more efficent, O(N^2)

        string ans = "";
        for (int i = 0; i < n; i++) {
            while (i<n && s[i] != '(') {
                ans += s[i];
                i++;
            }
            if (i >= n) break;
            int j = i+1;
            int k = s.find(')',j);
            string temp = s.substr(j, k - j);
            if (mp.find(temp) != mp.end()) {
                ans += mp[temp];
            } else {
                ans += '?';
            }
            i = k;
        }
        return ans;
    }
};