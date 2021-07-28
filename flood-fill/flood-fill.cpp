class Solution {
public:
    //bool vis[1000][1000];
    void DFS(vector<vector<int>>& image,int i,int j,int row,int col,int color,int a){
        if(i<0||j<0||i>=row||j>=col||image[i][j]!=a)
           return ;
         image[i][j]=color;
        DFS(image,i,j-1,row,col,color,a);
        DFS(image,i+1,j,row,col,color,a);
        DFS(image,i,j+1,row,col,color,a);
        DFS(image,i-1,j,row,col,color,a);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         if(image[sr][sc] == newColor)
            return image;
        int a=image[sr][sc];
        DFS(image,sr,sc,image.size(),image[0].size(),newColor,a);
        return image;
    }
};