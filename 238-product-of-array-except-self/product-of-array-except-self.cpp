class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=1;
        int suf=1;

        for(int i = 0;i<n-1;i++){
            ans[i+1]=ans[i]*nums[i];
        }
        for(int i = n-2;i>=0;i--){
            suf=suf*nums[i+1];
            ans[i]=suf*ans[i];

        }
        return ans;

    }
};