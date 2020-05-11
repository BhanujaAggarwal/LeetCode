class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(s[i]==')' and !st.empty() and st.top()=='(') st.pop();
            else if(s[i]==']' and !st.empty() and st.top()=='[') st.pop();
            else if(s[i]=='}' and !st.empty() and st.top()=='{') st.pop();
            else st.push(s[i]);
            i++;
        }
        if(st.empty()) return true;
        return false;
    }
};