class Solution {
public:
    int countCommas(int n) {
        int count=0;
        if(n>999){
            count=n-1000+1;    
        }
        return count;
    }
};