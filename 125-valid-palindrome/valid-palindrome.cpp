class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        bool pal=true;
        while(i<j){
            if(isalnum(s[i])){
                if(isalnum(s[j])){
                    s[i]=tolower(s[i]);
                    s[j]=tolower(s[j]);
                    if(s[i]==s[j]){
                        i++;
                        j--;
                        continue;
                    }
                    else{
                        pal=false;
                        break;
                    }
                }
                else{
                    j--;
                    continue;
                }
            }
            else{
                i++;
                continue;
            }
        }
        return pal;

    }

};