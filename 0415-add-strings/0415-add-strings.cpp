class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int c = 0;
        string ans = "";
        while (i >= 0 || j >= 0 || c > 0) {
            int sum=0;
            if(i>=0){
               sum+=num1[i]-'0';
               i--;
            }
            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }
            sum+=c;
            c=sum/10;
            sum%=10;
            char lastdigit=sum+'0';
            ans.push_back(lastdigit);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};