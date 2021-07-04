class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int start=0,end=n-1;
        while(start<end){
            int mid=(start+end)/2;
           // if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]) return nums[mid];
         if(mid%2==0){
                if(nums[mid]==nums[mid+1])
                    start=mid+1;
                else end=mid;
            }
            else{
                if(nums[mid]!=nums[mid-1])
                  end=mid;
                else start=mid+1;
            }
        }
        return nums[start];
    }
};