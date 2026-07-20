class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        if (n & 1) {
            return false;
        }

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '{' || ch == '[' || ch == '(') {
                st.push(s[i]);
            } else{
                if((st.empty())){
                    return false;
                }
                if (ch == '}' && st.top() != '{') {
                return false;
            } else if (ch == ']' && st.top() != '[') {
                return false;
            } else if (ch == ')' && st.top() != '(') {
                return false;
            }
                      st.pop();
            }
            
        }

        if (!st.empty()) {
            return false;
        }
        return true;
    }
};