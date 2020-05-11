class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string ans[7] = {"Saturday","Sunday", "Monday", "Tuesday", "Wednesday", "Thursday","Friday"};
        if(month<3){
            month = month+12;
            year--;
        }
        int k = year%100;
        int j = year/100;
        int h = day + ((month+1)*13)/5 + k + k/4 + j/4 + 5*j;
        h = h%7;
        return ans[h];
    }
};