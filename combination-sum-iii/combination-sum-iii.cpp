class Solution {
public:
    void all(vector<vector<int>>&s,vector<int>&vec,vector<int> &ans,int i,int k,int sum){
        if(ans.size()==k&&sum==0){
         s.push_back(ans);
        }
        for(int j=i;j<vec.size();j++){
            ans.push_back(vec[j]);
            all(s,vec,ans,j+1,k,sum-vec[j]);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> vec(9);
        for(int i=0;i<9;i++){
            vec[i]=i+1;
        }
        vector<int> ans;
        vector<vector<int>> s;
        int i=0,sum=n;
        all(s,vec,ans,i,k,sum);
        return s;
    }
};