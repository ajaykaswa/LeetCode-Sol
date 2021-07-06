class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min1=INT_MAX;
        int start1=0,start2=0;
        int sum=0;
        while(start2<nums.size()){
            sum+=nums[start2++];
            while(sum>=target){
                min1=min(min1,start2-start1);
                sum-=nums[start1++];
           }
        }
        if(min1==INT_MAX) return 0;
        else 
        return min1;
    }
};