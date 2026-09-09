class Solution {
public:
    long long countCommas(long long n) {
    //    long long count = 0;
        // if (n > 999) {
        //     count += n - 999;
        // } if (n > 999999) {
        //     count += n - 999999;
        // }  if (n > 999999999) {
        //     count += n - 999999999;
        // }if (n > 999999999999LL) {
        //     count += n - 999999999999LL;
        // }

        long long count=0;
        long long power=1000;
        while(power<=n){
            count+=n-power+1;
            if(power>LLONG_MAX/1000)
            break;
            power*=1000;
        }
        return count;
    }
};