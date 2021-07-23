class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) {
        int y=(co[1][1]-co[0][1]);
         int x=(co[1][0]-co[0][0]);
        for(int i=2;i<co.size();i++){
            int a=(co[i][1]-co[0][1]);
            int b=(co[i][0]-co[0][0]);
            if((x*a)!=(y*b)) return false;
        }
        return true;
        
    }
};