class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
              int n=matrix.size(),m=matrix[0].size();
        typedef pair<int,pair<int,int>>ppi;
        priority_queue<ppi, vector<ppi>, greater<ppi>> p;
        for(int i=0;i<n;i++)
        p.push({matrix[i][0],{i,0}});
        
        int x=k,ans;
        while(x--) {
            int e=p.top().first;
            int i=p.top().second.first;
            int j=p.top().second.second;
            ans=e;
            p.pop();
            if(j!=m-1)
            p.push({matrix[i][j+1],{i,j+1}});
        }
        return ans;
    }
};