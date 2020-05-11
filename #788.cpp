class Solution {
public:
    int rotatedDigits(int N) {
        int count = 0;
        for(int i=1;i<=N;i++){
            if(good(to_string(i))) count++;
        }
        return count;
    }
    bool good(string s){
        int n = s.size();
        bool e=0;
        for(auto i:s){
            if(i=='3' or i=='4' or i=='7') return false;
            if(i=='2' or i=='5' or i=='6' or i=='9') e=1;
        }
        return e;
    }
};
