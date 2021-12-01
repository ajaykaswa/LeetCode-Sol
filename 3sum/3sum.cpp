class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size()<3) return ans;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[j+1])
                     j++;
                    while(j<k&&nums[k]==nums[k-1])
                     k--;
                
                }
                if(nums[i]+nums[j]+nums[k]>0)
                     k--;
                else
                    j++;
            }
          while(i<nums.size()-2&&nums[i]==nums[i+1])
            i++;
                
        }
        return ans;
    }
};