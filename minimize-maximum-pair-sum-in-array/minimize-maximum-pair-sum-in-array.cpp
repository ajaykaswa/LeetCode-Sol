class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max1=INT_MIN;
        int i=0,n=nums.size()-1;
        while(i<n){
            max1=max(max1,nums[i]+nums[n]);
            i++,n--;
        }
        return max1;
    }
};