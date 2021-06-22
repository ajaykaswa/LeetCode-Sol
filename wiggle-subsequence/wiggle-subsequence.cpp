class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int odd_count=1,even_count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                odd_count=even_count+1;
            }
            else if(nums[i]<nums[i-1]) 
                even_count=odd_count+1;
        }
        return max(odd_count,even_count);
    }
};