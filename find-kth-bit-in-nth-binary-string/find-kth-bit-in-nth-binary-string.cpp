class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0"; 
      while(n--){
          if(k<=s.size()) return s[k-1];
          string ans=s;
          reverse(ans.begin(), ans.end());
          for (int i=0;i<ans.size();i++){
              if(ans[i]=='0') ans[i]='1';
              else ans[i]='0';
          }
        s += "1"+ans;
      }
    return '0';
    }
};