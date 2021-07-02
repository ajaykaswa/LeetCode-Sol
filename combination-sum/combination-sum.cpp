class Solution {
public:
     void all(vector<vector<int>>&s,vector<int>&nums,vector<int> &ans,int i,int target){
        if(target==0)
         s.push_back(ans);
         if(target<0) return ;
        for(int j=i;j<nums.size();j++){
            ans.push_back(nums[j]);
            all(s,nums,ans,j,target-nums[j]);
   
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> s;
        int i=0,sum=0;
        all(s,candidates,ans,i,target);
        return s;
    }
};