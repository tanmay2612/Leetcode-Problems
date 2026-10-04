class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        // int open = 0;
        // int star = 0;
        // int close = 0;
        // for (int i = 0; i < n; i++) {
        //     char ch = s[i];
        //     if (ch == '(') {
        //         open++;
        //     } else if (ch == ')') {
        //         if (open > 0) {
        //             open--;
        //         } else if (star > 0) {
        //             star--;
        //         } else {
        //             return false;
        //         }
        //     } else {
        //         star++;
        //     }
        // }
        // return open<=star;

        stack<int> open;
        stack<int> star;

        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                open.push(i);
            }
            else if(ch=='*'){
                star.push(i);
            }
            else{
                if(!open.empty()){
                    open.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!open.empty() && !star.empty()){
            if(open.top()>star.top()){
                return false;
            }
            else{
                open.pop();
                star.pop();
            }
        }
        if(open.empty()){
            return true;
        }
        return false;
    }
};