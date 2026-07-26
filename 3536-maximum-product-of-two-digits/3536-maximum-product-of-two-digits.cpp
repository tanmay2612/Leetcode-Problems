class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while (n > 0) {
            int remainder = n % 10;
            arr.push_back(remainder);
            n /= 10;
        }
        int m=arr.size();
        sort(arr.begin(),arr.end());
        int product = arr[m-1] * arr[m-2];
        return product;
    }
};