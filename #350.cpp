class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        vector<int> ans;
        int i=0,j=0;
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        while(i<n1.size() and j<n2.size()){
            if(n1[i]==n2[j]) {
                ans.push_back(n1[i]);
                i++,j++;
            } else if(n1[i]>n2[j]) j++;
            else i++;
        }
        return ans;
    }
};