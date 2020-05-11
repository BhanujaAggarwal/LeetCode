class Solution {
public:
    int majorityElement(vector<int>& n) {
        int m = n.size()/2,i=0,count=1,nn=n.size();
        sort(n.begin(),n.end());
        if(!m) return n[0];
        while(i<nn){
            count=1;
            while(i<nn-1 and n[i]==n[i+1]){
                count++;
                i++;
            } 
            if(count>m) return n[i];
            i++;
        }
        return 0;
    }
};