class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<high){
             if (nums[low]<nums[high])
                return nums[low];
             int mid = (low+high)/2;
            if(nums[mid]<=nums[(mid-1+n)%n]&&nums[mid]<=nums[(mid+1)%n]){
             return nums[mid];
            }
           if(nums[low]<=nums[mid]){
               low=mid+1;
            }
            else
                high=mid;
        }
        return nums[low];
    }
};