class Solution {
public:
    int countKeyChanges(string s) {
        int current=s[0],count=0;
        for(int i=0;i<s.length();i++){
            if(current==toupper(s[i]) || current==tolower(s[i])){
                continue;
            }
            else{
                count++;
                current=s[i];
            }
        }
        return count;
    }
};