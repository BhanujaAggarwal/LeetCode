class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        int i=0;
        while(i<l.size()){
            if(l[i]>t) return l[i];
            i++;
        }
        return l[0];
    }
};