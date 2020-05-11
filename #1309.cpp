#include <iostream> 
#include <vector>
#include<string>
using namespace std; 

string freqAlphabets(string s) {
        int n=s.length();
        char mapp[27]="abcdefghijklmnopqrstuvwxyz";
        string result="";
        for(int i=0;i<n;i++){
            if(i<n-2 && s[i+2]=='#'){
                string temp="";
                temp+=s[i];
                temp+=s[i+1];
                int w = stoi(temp);
                result+=mapp[w-1];
                i+=2;
            }else{
                int w = s[i] - '0';
                result+=mapp[w-1];
            }
        }
        return result;
    }
int main() 
{ 
    string s="25#";
    cout<<freqAlphabets(s);
  
    return 0; 
}