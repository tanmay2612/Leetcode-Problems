class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n * n;
        int even = n * (n + 1);
        // if (odd == 1) {
        //     return even;
        // }
        // if (even == 1) {
        //     return odd;
        // }
        if (odd == even) {
            return odd;
        }

        while (odd > 0 && even > 0) {
            if (odd > even) {
                odd %= even;
            } else {
                even %= odd;
            }
        }

        return max(odd, even);
    }
};