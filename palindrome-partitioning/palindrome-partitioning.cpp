class Solution {
public:
   bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
   }
void help(string s,vector<vector<string>>& ans,vector<string>& vec,int i){
     if(i==s.size()){
         ans.push_back(vec);
         return ;
     }
      for(int k=i;k<s.size();k++){
        if(isPalindrome(s,i,k)){
        vec.push_back(s.substr(i,k-i+1));
        help(s,ans,vec,k+1);
        vec.pop_back();
        }
      }
    
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> vec;
        help(s,ans,vec,0);
        return ans;
    }
};