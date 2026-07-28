class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();

       sort(s.begin(),s.begin()+n/2);
       cout<<s<<" ";
       sort(s.begin()+(n+1)/2,s.end(),greater<char>());
       cout<<s;
       return s;
    }
};