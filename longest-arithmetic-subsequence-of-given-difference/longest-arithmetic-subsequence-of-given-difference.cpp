class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map<int,int>mp;
            int mx=1;
    
          for(int i=0;i<arr.size();i++){
              mp[arr[i]]=mp[arr[i]-difference]+1;
              mx=max(mp[arr[i]],mx);
       }
      return mx;
    }
};