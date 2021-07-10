class Solution {
public:
      int dp[21][21];
    int helper(vector<int> nums,int i,int j){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j]= max(nums[i]-helper(nums,i+1,j),nums[j]-helper(nums,i,j-1));
        return  dp[i][j];
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int i=0;
         memset(dp,-1,sizeof(dp));
        int score=helper(nums,i,n-1);
        if(score>=0) return true;
        else return false;
      
    }
};