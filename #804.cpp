class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> code;
        for(int i=0;i<n;i++){
            int curr_len = words[i].length(),j=0;
            string temp="";
            while(j<curr_len){
                temp+=morse[words[i][j]-'a'];
                j++;
            }
            code.insert(temp);
        }
        return code.size();
    }
};