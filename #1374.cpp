class Solution {
public:
    string generateTheString(int n) {
        string result="";
        if(n==1){
            result+="a";
        }else{
            if(n%2==0){
                result+="a";
                string res(n-1,'b');
                result+=res;
            }else{
                result+="a";
                result+="b";
                string res(n-2,'c');
                result+=res;
            }
        }
        return result;
    }
};