class Solution {
public:
    int tribonacci(int n) {
        int q = 0 , w = 1 , e = 1;
        if(!n) return 0;
        for(int i=3;i<=n;i++){
            int sum = q+w+e;
            q = w;
            w = e;
            e = sum;
        }
        return e;
    }
};