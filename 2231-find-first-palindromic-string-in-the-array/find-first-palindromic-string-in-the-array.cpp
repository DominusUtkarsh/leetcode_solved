class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string a;
        for(string val:words){
            a=val;
            reverse(val.begin(), val.end());
            if(val==a){
                return a;
            }
        }
        return "";
    }
};