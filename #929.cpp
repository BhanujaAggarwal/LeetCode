class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> ans;
        for(auto i:emails){
            int n = i.size(),j=0,flag=0;
            string s="";
            while(j<n){
                while(i[j]!='@' and !flag){
                    if(i[j+1]=='@') flag = 1;
                    if(i[j]=='+'){
                        break;
                    }
                    else if(i[j]!='.'){
                        s+=i[j];
                    }
                    j++;
                }
                if(i[j]=='+' and !flag){
                    while(i[j]!='@'){
                        j++;
                    }
                    flag = 1;
                }
                s+=i[j];
                j++;
            }
            ans.insert(s);
        }
        return ans.size();
    }
};