class Solution {
public:
    int count=0;
    bool isvalid(vector<vector<int>>&ans,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(ans[i][col]==1) return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j){
            if (ans[i][j] == 1)
                return false;
        }
         for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j){
            if (ans[i][j] == 1)
                return false;
         }
        return true;
    }
     void solve(vector<vector<int>> &ans,int i,int n){
        if(i==n)count++;
        for(int j=0;j<n;j++){
            if(isvalid(ans,i,j,n)){
            ans[i][j]=1;
            solve(ans,i+1,n);
            ans[i][j]=0;
            }
        }
        
    }
    int totalNQueens(int n) {
          vector<vector<int>> ans(n,vector<int>(n,0));
        solve(ans,0,n);
        return count;
    }
};