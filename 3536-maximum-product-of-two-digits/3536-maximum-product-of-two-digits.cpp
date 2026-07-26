class Solution {
public:
    int maxProduct(int n) {
        int maxi_1 = -1;
        int maxi_2 = -1;
        while (n > 0) {
            int remainder = n % 10;
            if (maxi_1 < remainder) {
                maxi_2 = maxi_1;
                maxi_1 = remainder;
            }
            else if(remainder>=maxi_2){
                maxi_2 = remainder;
            }
            n /= 10;
        }
        int product = maxi_1 * maxi_2;
        return product;
    }
};