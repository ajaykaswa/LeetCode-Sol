class Solution {
public:
    void help(vector<int>&candidates,vector<vector<int>>&ans,vector<int>&simp,int target,int j){
        if(target==0){
            ans.push_back(simp);
            return;
        }
        if(target<0) return ;
        
        for(int i=j;i<candidates.size();i++){
            simp.push_back(candidates[i]);
            help(candidates,ans,simp,target-candidates[i],i);
            simp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> simp;
        help(candidates,ans,simp,target,0);
        return ans;
    }
};