class Solution {
public:
    int count=0;
    void help(vector<vector<int>>&grid,int i,int j,int n,int m,int total,int t){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]==-1) return;
        if(grid[i][j]==2){
            if(total==t){
            count++;
            }
            return;
        }
        grid[i][j]=-1;
        help(grid,i-1,j,n,m,total+1,t);
        help(grid,i+1,j,n,m,total+1,t);
        help(grid,i,j-1,n,m,total+1,t); 
        help(grid,i,j+1,n,m,total+1,t);
        grid[i][j]=0;
        return;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size(),totalsquares=0;;
        int m=grid[0].size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                   a=i;
                    b=j;
                }
                if(grid[i][j]!=-1) totalsquares++;
            }
        }
         help(grid,a,b,n,m,1,totalsquares);
        return count;
    }
};