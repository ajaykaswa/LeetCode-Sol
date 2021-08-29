class Solution {
public:
  int dp[100][100];
  int find(vector<int>& arr,int i,int j){
    int num1=0;
      for(int a=i;a<=j;a++) num1=max(num1,arr[a]);
    return num1;
  }
  
  int matrixChainMemoised(vector<int>& arr, int i, int j){
    if (i == j) return 0;
      if (i + 1 == j) return arr[i] * arr[j];
    if (dp[i][j] != -1)  return dp[i][j];
  
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++){
        dp[i][j] = min(dp[i][j],
                       matrixChainMemoised(arr, i, k)
                       + matrixChainMemoised(arr, k + 1, j)
                       + find(arr,i,k)*find(arr,k+1,j));
                       
    }
    return dp[i][j];
}
  
    int mctFromLeafValues(vector<int>& arr) {
        int i=0, j = arr.size() - 1;
      memset(dp,-1,sizeof(dp));
    return matrixChainMemoised(arr, i, j);
    }
};