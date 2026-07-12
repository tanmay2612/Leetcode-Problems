class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        map<int, int> mp;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            mp[arr[i]] = 0;
        }
        int count = 1;
        for (auto& it : mp) {
            it.second = count;
            count++;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};