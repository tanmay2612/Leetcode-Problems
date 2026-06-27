class Solution {
public:
    int time(vector<string>& garbage, vector<int>& travel, char s) {
        int req = 0;
        int n = garbage.size();
        int last = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (garbage[i].find(s) != string::npos) {
                last = i;
                break;
            }
        }

        for (int i = 0; i <= last; i++) {
            int cnt = 0;
            if (garbage[i].find(s) != string::npos) {
                for (char ch : garbage[i]) {
                    if (ch == s)
                        cnt++;
                }
                req += travel[i] + cnt;
            } else {
                req+=travel[i];
            }
        }
        return req;
    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        travel.insert(travel.begin(), 0);

        int G = time(garbage, travel, 'G');
        int P = time(garbage, travel, 'P');
        int M = time(garbage, travel, 'M');

        int ans = G + P + M;

        return ans;
    }
};