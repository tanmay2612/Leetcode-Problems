class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> count;

        for(char ch : s){
            count[ch]++;
        }

        string ans="";

        for(char ch: order){
            while(count[ch]>0){
                ans+=ch;
                count[ch]--;
            }
        }

        for(auto it: count){
            while (it.second > 0) {
                ans += it.first;
                it.second--;
            }
        }
        return ans;
        
    }
};