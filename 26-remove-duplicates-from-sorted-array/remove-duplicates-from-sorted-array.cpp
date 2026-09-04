class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int uniq=0;
        int check=1;
        int count =1;
        while(check<n){
            if(nums[check]!=nums[check - 1]){
                nums[uniq +1]=nums[check];
                uniq++;
                count++;
            }
            check++;
        }
        return count;
    }
};