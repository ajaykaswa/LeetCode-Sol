class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> vec;
        int total_count=0;
        for(int i=0;i<n;i++){
            int a=0;
            int count=0;
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count++;
                    a=j;
                    total_count++;
                }
            }
            if(count==1){
                vec.push_back(a);
            }
        }
     int not_count=0;
        for(int i=0;i<vec.size();i++){
            int a=vec[i];
            int count=0;
            for(int j=0;j<n;j++){
                if(grid[j][a]==1){
                    count++;
                }
            }
            if(count==1) not_count++;
        }
        return total_count-not_count;
    }
};