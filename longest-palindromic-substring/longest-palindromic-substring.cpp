class Solution {
public:
    string ans;
    int max1=0;
    void check(string s,int left,int right,int n){
       if(s.size()==0 || left>right) return ;
      while(left>=0 && right<n && s[left]==s[right]){
         if(right-left+1>max1){
         ans=s.substr(left,right-left+1);
         max1=right-left+1;
         }
          left--;
          right++;
      }  

    }
    
    string longestPalindrome(string s) {
       int n=s.size();
        for(int i=0;i<n;i++){
            check(s,i,i,n);
            check(s,i,i+1,n);
        }
        
        return ans;
    }
};