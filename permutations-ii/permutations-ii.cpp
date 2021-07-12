class Solution {
public:
       void all(set<vector<int>>&s,vector<int>&nums,int i){
          if(i==nums.size()){
        s.insert(nums);
              return ;
          }
        for(int j=i;j<nums.size();j++){
             swap(nums[j],nums[i]);
            all(s,nums,i+1);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        int i=0;
        all(s,nums,i);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};