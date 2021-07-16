class Solution {
public:
 
    int solve(vector<vector<int>>& grid,int n,int m,int i,int j){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]==0){
            return 0;
        }
        int p=grid[i][j];
        grid[i][j]=0;
    auto res=max({solve(grid,n,m,i+1,j),solve(grid,n,m,i-1,j),solve(grid,n,m,i,j-1),solve(grid,n,m,i,j+1)});
        grid[i][j]=p;
        return grid[i][j]+res ;
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m =grid[0].size();
        int max1=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                  max1=max(max1,solve(grid,n,m,i,j));
                }
            }
        }
        return max1;
    }
};