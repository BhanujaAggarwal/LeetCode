class Solution {
public:
    int countLargestGroup(int n) {
        int a[37]={0},ans=0;
        int mx = 0;
        for(int i=1;i<=n;i++){
            a[digisum(i)]++;
        }
        sort(a,a+37,greater<int>());
        for(auto i:a){
            if(i==a[0])
                ans++;
            else
                break;
        }
        return ans;
    }
    int digisum(int n){
        if(!n) return n;
        return n%10 + digisum(n/10);
    }
};