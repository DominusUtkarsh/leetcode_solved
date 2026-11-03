class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int curr=0;
        int next=1;

        if(arr[0]>arr[1]){
            return 0;
        }

        for(curr = 0 ; curr < n ; curr++){

            if( arr[curr]<arr[next]){
                next++;
                continue;
            }
            else if( arr[curr] > arr[next]){
                return curr;
            }       

            if(next==n-1){
                return arr[next];
            }

        }
        return -1;
    }
};