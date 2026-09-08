class Solution {
public:
    int countCommas(int n) {
        int count=0;
        while(n>999){
            count=n-1000+1;
            n-=count;
        }
        return count;
    }
};