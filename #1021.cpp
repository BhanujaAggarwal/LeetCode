#include <iostream> 
#include <vector>
#include<string>
using namespace std; 

string removeOuterParentheses(string S) {
        int left = 0;
        int right = 0;
        string result="";
        int n = S.length();
        int lflag=1;
        int i=0;
        while(i<n){
            do{
                if(S[i]=='('){
                    left++;
                    if(lflag){
                        lflag=!lflag;
                    }else{
                        result+='(';
                    }
                }else{
                    right++;
                    if(left!=right){
                        result+=')';
                    }
                }
                i++;
            }while(left!=right && i<n);
            lflag=1;
            left=right=0;
        }
        return result;
    }

int main() 
{ 
    string s="()()";
    cout<<removeOuterParentheses(s);
  
    return 0; 
}