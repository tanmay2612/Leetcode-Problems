class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> counts;
        for (char c : text) {
            counts[c]++;
        }
        
        return min({counts['b'], counts['a'], counts['n'], counts['l'] / 2, counts['o'] / 2});
    }
};