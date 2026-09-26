class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        int n = s.length();
        // for (int i = 0; i < n; i++) {
            while(s.find('(') != string::npos) {
                int j = s.find('(') + 1;
                int k = s.find(')');
                string temp = s.substr(j,k-j);
                if (mp.find(temp) != mp.end()) {
                    s.replace(j-1, k-j+2, mp[temp]);
                } else {
                    s.replace(j-1,k-j+2, "?");
                }
            }
        // }
        return s;
    }
};