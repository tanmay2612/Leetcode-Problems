class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n;
        int sum=0;
        int product=1;
        while(k>0){
              int rem=k%10;
              sum+=rem;
              product*=rem;
              k/=10;
        }
        if(n%(sum + product)==0){
            return true;
        }
        return false;
    }
};