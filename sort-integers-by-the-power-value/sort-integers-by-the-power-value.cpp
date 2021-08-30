class Solution {
public:
   static bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first == b.first ? a.second < b.second : a.first < b.first;
    }
  
  int dp[1000000];
   int find(int n){
     if(n==1) return 0;
     if(dp[n]!=-1) return dp[n];
     int count=0;
     if(n%2==0){
       count= 1+find(n/2);
     }
     else {
       count= 1+find((3*n)+1);
     }
     return dp[n]=count;
   }
  
    int getKth(int lo, int hi, int k) {
       vector<pair<int,int>>vec;
      memset(dp,-1,sizeof(dp));
      for(int i=lo;i<=hi;i++){
        vec.push_back({find(i),i});
      }
      sort(vec.begin(),vec.end(),cmp);
      return vec[k-1].second;
    }
};