class Solution {
public:
    int countKeyChanges(string s) {
        int current=toupper(s[0]),count=0;
        for(int i=0;i<s.length();i++){
            if(current==toupper(s[i])){
                continue;
            }
            else{
                count++;
                current=toupper(s[i]);
            }
        }
        return count;
    }
};