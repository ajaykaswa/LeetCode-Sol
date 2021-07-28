class Solution {
public:
      void help(vector<vector<int>>&grid,int i,int j,int n, int m){
        if(i<0||j<0||i>=n||j>=m||grid[i][j]!=1) return;
         grid[i][j]=0;
        help(grid,i-1,j,n,m);
        help(grid,i+1,j,n,m);
        help(grid,i,j+1,n,m);
        help(grid,i,j-1,n,m);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0||j==0||i==grid.size()-1||j==grid[0].size()-1)&&grid[i][j]==1){
                    help(grid,i,j,n,m);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
               count++;
                }
            }
        }
        
        return count;
    }
};