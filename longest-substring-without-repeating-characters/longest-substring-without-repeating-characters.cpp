class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1);
      int i=0,r=0;
      int n= s.size();
      int count=0;
      while(r<n){
        if(map[s[r]]!=-1) {
          i=max(map[s[r]]+1,i);
         }
        map[s[r]]=r;
        count=max(count,r-i+1);
        r++;
      }
       return count;
    }
};