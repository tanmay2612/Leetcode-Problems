class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = n;
        int product = 1;
        while (1) {
            int temp = ans;
            while (temp > 0) {
                int remainder = temp % 10;
                product *= remainder;
                temp /= 10;
            }
            if (product % t != 0) {
                ans = ans+1;
            }
            else if(product%t==0 && ans>=n){
                break;
            }
            product=1;
            
        }
        cout<<product;
        return ans;
    }
};