class Solution {
public:

string ValidString(string s){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
             s[i]+=32;
             ans+=s[i];
        }
        else if(s[i]>='a' && s[i]<='z')
            {
            ans+=s[i];
        }
        else if(s[i]>='0' && s[i]<='9')
            {
            ans+=s[i];
        }
        else{
            continue;
        }
    }
    return ans;
}
bool checkPalindrome(string ans, int n){
    for(int i=0;i<n;i++){
        if(ans[i]!=ans[n-i-1]){
            return false;
        }
    }
    return true;
}

    bool isPalindrome(string s) {
        string ans=ValidString(s);
        int n=ans.size();
        return checkPalindrome(ans,n);
    }
};