class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
      unordered_map<string,vector<string>>mp;
        int i=0;
        for(auto s: strs){
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i++]);
                
            }
        
        vector<vector<string>> ans;
        for(auto st :mp){
            ans.push_back(st.second);
        }
          return ans;
    }
};