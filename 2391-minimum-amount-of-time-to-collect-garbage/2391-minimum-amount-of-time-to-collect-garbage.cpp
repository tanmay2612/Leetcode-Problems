class Solution {
public:
    int timereq(vector<string>& garbage, vector<int>& travel, char s) {
        int n = garbage.size();
        int last = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (garbage[i].find(s) != string::npos) {
                last = i;
                break;
            }
        }
        int reqTime = 0;
        for (int i = 0; i <= last; i++) {
            if (garbage[i].find(s) != string::npos) {
                int cnt = 0;
                for (char ch : garbage[i]) {
                    if (ch == s) {
                        cnt++;
                    }
                }
                reqTime += travel[i] + cnt;

            } else {
                reqTime += travel[i];
            }
        }
        return reqTime;
    }

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        travel.insert(travel.begin(), 0);

        int G = timereq(garbage, travel, 'G');
        int P = timereq(garbage, travel, 'P');
        int M = timereq(garbage, travel, 'M');

        int ans = G + P + M;

        return ans;
    }
};