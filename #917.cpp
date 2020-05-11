class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;
        for(auto i:s){
            if(isalpha(i)) st.push(i);
        }
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) s[i] = st.top(),st.pop();
        }
        return s;
    }
};