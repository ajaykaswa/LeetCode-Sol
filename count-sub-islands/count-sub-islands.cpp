class Solution {
public:
    int help(vector<vector<int>>& grid1,vector<vector<int>>&grid2,int i,int j,int n, int m){
        int count=1;
        if(i<0||j<0||i>=n||j>=m||grid2[i][j]==0) return 1;
        grid2[i][j]=0;
       return  help(grid1,grid2,i-1,j,n,m)&
        help(grid1,grid2,i+1,j,n,m)&
        help(grid1,grid2,i,j+1,n,m)&
        help(grid1,grid2,i,j-1,n,m)& grid1[i][j]==1;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
         int n=grid2.size();
        int m=grid2[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    
                    count+=help(grid1,grid2,i,j,n,m);
                
                }
            }
        }
        return count;
    }
};