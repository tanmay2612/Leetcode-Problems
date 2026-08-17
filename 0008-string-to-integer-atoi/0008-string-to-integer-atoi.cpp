class Solution {
public:
    string validString(string s, int n) {
        string t = "";
        int j = 0;
        while (j < n && s[j] == ' ') {
            j++;
        }

        if (j < n && (s[j] == '+' || s[j] == '-')) {
            t += s[j];
            j++;
        }
        if (j >= n || (s[j] < '0' || s[j] > '9')) {
            return "0";
        }
        while (j<n && s[j] >= '0' && s[j] <= '9') {
            t += s[j];
            j++;
        }
        return t;
    }

    int myAtoi(string s) {
        int n = s.length();
        string t = validString(s, n);
        long long m = 0;
        bool sign = true;
        if (t[0] == '-') {
            sign = false;
        }
        int j = 0;
        if (!sign || t[0]=='+') {
            j = 1;
        }
        for (int i = j; i < t.length(); i++) {
            int temp = t[i] - '0';
            m = m * 10 + temp;
            if (sign && m > INT_MAX) {
                return INT_MAX;
            } else if (!sign && -m < INT_MIN) {
                return INT_MIN;
            }
        }
        if (!sign) {
            return -m;
        }
        return m;
    }
};