class Solution {
public:
      void all(set<vector<int>>&s,vector<int>&vec,vector<int> &ans,int i,int k){
        if(ans.size()==k){
         s.insert(ans);
        }
    
        for(int j=i;j<vec.size();j++){
            ans.push_back(vec[j]);
            all(s,vec,ans,j+1,k);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            vec[i]=i+1;
        }
        vector<int> ans;
        set<vector<int>> s;
        int i=0;
        all(s,vec,ans,i,k);
        vector<vector<int>>ans1(s.begin(),s.end());
        return ans1;
    }
};