class Solution {
public:
    int divide(long long int dividend,long long int divisor) {
        long long int ans=0;
        long long int sign=1;
        if(dividend==INT_MIN && divisor==-1 ){
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1 ){
            return INT_MIN;
        }
        if (dividend < 0) {
            dividend = dividend * (-1);
            sign*=-1;
        }
        if (divisor < 0) {
            divisor = divisor * (-1);
            sign*=-1;
        }
        long long int s = 0;
        long long int e = dividend;
        while (s <= e) {
            long long int mid = s + (e - s) / 2;
            if (mid * divisor == dividend) {
                return mid*sign;
            } else if (mid * divisor < dividend) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        
        return ans*sign;
        }
};