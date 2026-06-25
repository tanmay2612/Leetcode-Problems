class Solution {
public:

int checkPalindrome(string s, int i, int j){
    int count=0;
    while(i>=0 && j<=s.length()-1 && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
        for (int c = 0; c < n; c++) {
            int i = c;
            int j = c;
            int odd = checkPalindrome(s, i, j);
            i = c;
            j = c + 1;
            int even = checkPalindrome(s, i, j);

            count+=odd+even;
        }
        return count;
    }
};