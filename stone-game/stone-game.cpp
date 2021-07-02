class Solution {
public:
    int dp[501][501];
    int helper(vector<int>&piles,int i,int j){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=max(piles[i]-helper(piles,i+1,j),piles[j]-helper(piles,i,j-1));
    }
     bool stoneGame(vector<int>& piles) { 
         int n=piles.size();
         memset(dp,-1,sizeof(dp));
         return helper(piles,0,n-1);
       //  return true;
    }
};