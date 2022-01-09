class Solution {
public:
    void find(set<vector<int>>&ans,vector<int>&nums,int j,int n){
        
        ans.insert(nums);
        for(int i=j;i<nums.size();i++){
            swap(nums[i],nums[j]);
            find(ans,nums,j+1,n);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        set<vector<int>>ans;
        int n=nums.size();
        find(ans,nums,0,n);
        vector<vector<int>> ans1(ans.begin(),ans.end());
        return ans1;
    }
};