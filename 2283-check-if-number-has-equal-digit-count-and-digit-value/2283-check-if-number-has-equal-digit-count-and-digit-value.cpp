class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> mp;
        int n = num.length();
        for (int i=0;i<n;i++) {
            int digit=num[i]-'0';
            if(digit<n){
                mp[digit]++;
            }
        }
        for (int i = 0; i < n; i++) {
            int check=num[i]-'0';
            if (mp[i] != check) {
                return false;
            }
        }
        return true;
    }
};