class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> m;
        string s = "balloon";
        for(auto i:text){
            m[i]++;
        }
        m['l'] /= 2;
        m['o'] /= 2;
        int mini = INT_MAX;
        for(auto i:s){
            mini = min(mini,m[i]);
        }
        return mini;
    }
};