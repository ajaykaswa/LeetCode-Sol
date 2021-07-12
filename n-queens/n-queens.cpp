class Solution {
public:
    bool isvalid(vector<string>&ans,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(ans[i][col]=='Q') return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j){
            if (ans[i][j] == 'Q')
                return false;
        }
         for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j){
            if (ans[i][j] == 'Q')
                return false;
         }
        return true;
    }
    void solve( vector<vector<string>> &mat,vector<string> &ans,int i,int n){
        if(i==n) mat.push_back(ans);
        for(int j=0;j<n;j++){
            if(isvalid(ans,i,j,n)){
            ans[i][j]='Q';
            solve(mat,ans,i+1,n);
            ans[i][j]='.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> mat;
          vector<string> ans(n,string(n,'.'));
        solve(mat,ans,0,n);
        return mat;

    }
}; 