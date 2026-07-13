class Solution {
public:
    int mirrorDistance(int n) {
        int reverse=0;
        int k=n;
        while(k!=0){
            reverse=reverse*10 + k%10;
            k/=10;
        }
        return abs(reverse-n);
    }
};