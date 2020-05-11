class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int i=0,ans=0;
        while(i<ops.size()){
            if(ops[i]=="+"){
                int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.push(n1);
                s.push(n1+n2);
            } else if(ops[i]=="D"){
                s.push(2*s.top());
            } else if(ops[i] == "C"){
                s.pop();
            } else{
                s.push(stoi(ops[i]));
            }
            i++;
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};