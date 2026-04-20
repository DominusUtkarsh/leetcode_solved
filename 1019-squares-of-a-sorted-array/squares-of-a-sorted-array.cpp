class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        arr=nums;
        for( int i=0;i<arr.size();i++){
            arr[i]*=arr[i];
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};