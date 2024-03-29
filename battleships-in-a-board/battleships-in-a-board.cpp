class Solution {
public:
     void help(vector<vector<char>>&grid,int i,int j,int n, int m){
        if(i<0||j<0||i>=n||j>=m||grid[i][j]!='X') return;
        grid[i][j]='.';
        help(grid,i-1,j,n,m);
        help(grid,i+1,j,n,m);
        help(grid,i,j+1,n,m);
        help(grid,i,j-1,n,m);
    }
    int countBattleships(vector<vector<char>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                    help(grid,i,j,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};