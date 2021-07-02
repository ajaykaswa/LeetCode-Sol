class Solution {
public:
      void all(vector<vector<int>>&s,vector<int>&nums,int i){
          if(i==nums.size()){
        s.push_back(nums);
              return ;
          }
        for(int j=i;j<nums.size();j++){
             swap(nums[j],nums[i]);
            all(s,nums,i+1);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> s;
        int i=0;
        all(s,nums,i);
        return s;
    }
};