class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=1;
        int max=0;
        for(string val: sentences){
            for(int i=0;i<val.length();i++){
                if(val[i]==' '){
                    n++;
                }
            }
            if(max<n){
                max=n;
            }
            n=1;
        }
        return max;
    }
};