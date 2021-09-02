class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n-1);
      int len=0;
      for(int i=0;i<n-1;i++){
        ans[i]=i+1;
        len+=i+1;
      }
      ans.push_back((-1)*len);
      return ans;
    }
};