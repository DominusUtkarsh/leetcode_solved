class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int ans=0;
        // for(int i=0 ; i< prices.size();i++){
        //     for(int j = i+1;j<prices.size();j++){
        //         if(ans<prices[j]-prices[i]){
        //             ans=prices[j]-prices[i];
        //         }
        //     }
        // }
        // return ans;

        int ans=0,buy=prices[0];
        for(int i=1 ; i< prices.size();i++){
            if(buy<prices[i]){
                    ans=max(ans,prices[i]-buy);
                }
            buy=min(buy,prices[i]);
            
        }
        return ans;
    }
};