class Solution {
public:
   void  find(vector<vector<int>>& grid,int n,int m ,int i,int j, int sum){
     if(i<0||j<0||i>=n||j>=m||(grid[i][j]!=0&& grid[i][j] <= sum)) return;
     
     grid[i][j]=sum;
     
     find(grid,n,m,i+1,j,sum+1);
     find(grid,n,m,i-1,j,sum+1);
     find(grid,n,m,i,j+1,sum+1); 
     find(grid,n,m,i,j-1,sum+1);
     
     
   }
  
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
      int m=grid[0].size();
      int max1=-1;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]==1){
            grid[i][j]=0;
           find(grid,n,m,i,j,1);
          }
        }
      }
     for (int i=0;i<n;i++)
       for (int j=0;j<m;j++)
      if (grid[i][j] > 1) max1 = max(max1, grid[i][j] - 1);
  return max1;
    }
};