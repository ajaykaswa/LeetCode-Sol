class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j=0, i=0,max1=0,count1=0,count0=0;
        int n=nums.size();
        while(i < n) {
            if(nums[i]==1) count1++;
            else count0++;
            
            while(count0>1) {
                if(nums[j]==0) count0--;
                j++;
            }
            max1=max(max1,i-j);
            i++;
        }
        return max1;
    }
};