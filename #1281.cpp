class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum = 0;
        int product = 1;
        int curr_digit;
        while(n){
            curr_digit = n%10;
            n = n/10;
            sum += curr_digit;
            product *= curr_digit;
        }
        return product - sum;
    }
};