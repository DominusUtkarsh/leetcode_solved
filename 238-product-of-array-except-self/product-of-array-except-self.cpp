class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        pre[0]=1;
        vector<int> suf(n);
        suf[n-1]=1;
        vector<int> ans(n);

        for(int i = 1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
            suf[n-i-1]=suf[n-i]*nums[n-i];
        }
        for(int i = 0; i<n; i++){
            ans[i]=pre[i]*suf[i];
        }
        return ans;

    }
};