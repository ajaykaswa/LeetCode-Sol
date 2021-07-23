class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int len=n-1,bre=n-1;
        int i=0,j=0;
        int count=1;
        while(i<=len&&j<=bre){
            for(int k=j;k<=bre&&i<=len;k++){
                ans[i][k]=count++;
            }
            i++;
            for(int k=i;k<=len&&j<=bre;k++){
                ans[k][bre]=count++;
            }
            bre--;
            for(int k=bre;k>=j&&i<=len;k--){
                ans[len][k]=count++;
            }
            len--;
            for(int k=len;k>=i&&j<=bre;k--){
                ans[k][j]=count++;
            }
            j++;
        }
        return ans;
    }
};