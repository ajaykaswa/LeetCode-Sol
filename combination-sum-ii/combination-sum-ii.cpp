class Solution {
public:
      void all(set<vector<int>>&s,vector<int>&nums,vector<int> &ans,int i,int target){
        if(target==0){
        //sort(ans.begin(),ans.end());
         s.insert(ans);
        }
         if(target<0) return ;
        for(int j=i;j<nums.size();j++){
            ans.push_back(nums[j]);
            all(s,nums,ans,j+1,target-nums[j]);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ans;
        sort(candidates.begin(),candidates.end());
        set<vector<int>> s;
        int i=0,sum=0;
        all(s,candidates,ans,i,target);
        vector<vector<int>>ans1(s.begin(),s.end());
        return ans1;
    }
};