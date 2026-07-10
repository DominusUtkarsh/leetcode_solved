//optimised solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c_sum=0;
        int max_sum=INT_MIN;
        for(int val : nums ){
            c_sum+=val;
            max_sum=max(c_sum,max_sum);
            if(c_sum<0){
                c_sum=0;
            }
                
                
        }
        return max_sum;
    }
        
};