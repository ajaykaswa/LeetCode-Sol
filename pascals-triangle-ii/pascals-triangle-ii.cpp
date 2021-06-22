class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> out{{1}};
        if(rowIndex==0) 
            return out[0];  
        else {
            for(int i=1;i<=rowIndex;i++) {
                vector<int> v;
                v.push_back(1);
                for(int j=0;j<out[i-1].size()-1;j++)
                    v.push_back(out[i-1][j]+out[i-1][j+1]);
                v.push_back(1);
                out.push_back(v);
            }
        }
        return out[rowIndex];
    }
};