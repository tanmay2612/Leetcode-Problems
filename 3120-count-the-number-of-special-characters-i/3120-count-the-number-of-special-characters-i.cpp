class Solution {
public:
    int numberOfSpecialChars(string word) {
       
        int n=word.size();
        
        string s="";
        for(int i=0;i<n;i++){
            char ch=word[i];
            if(s.find(ch)==string::npos){
                  s.push_back(ch);
            }
        }
        int count=0;
        int m=s.size();
        for(int i=0;i<m;i++){
            char ch=s[i];
            if(s.find(ch+32)!=string::npos){
                count++;
            }
        }
        return count;
        
    }
};