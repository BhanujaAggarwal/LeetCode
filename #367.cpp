class Solution {
public:
    bool isPerfectSquare(long long int num) {
        long long int i=1;
        while(1){
            if(i*i==num) return true;
            if(i*i>num) return false;
            i++;
        }
        return false;
    }
};