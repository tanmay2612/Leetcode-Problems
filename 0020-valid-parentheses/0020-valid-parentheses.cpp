class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        if (n & 1) {
            return false;
        }
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                }
                else if (ch == ')' && st.top() != '(') {
                    return false;
                } else if (ch == ']' && st.top() != '[') {
                    return false;
                } else if (ch == '}' && st.top() != '{') {
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        if (!st.empty()) {
                    return false;
                }
        return true;
    }
};