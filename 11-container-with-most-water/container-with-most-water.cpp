class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0 , right=height.size()-1;
        int vol,ans=0;
        while(left<right){
            vol=height[left]<height[right]? height[left]*(right-left) : height[right]*(right-left);
            ans=max(ans,vol);
            height[left]<height[right]? left++: right--;
        }
        return ans;
    }
};