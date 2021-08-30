class Solution {
public:
  vector<vector<int>> dp;
   int help(vector<int>& locations,int start,int finish,int fuel){
     if(fuel<0) return 0;
     if(dp[start][fuel]!=-1) return dp[start][fuel];
     long long ans=0;
     if(start==finish) ans=1;
     for(int i=0;i<locations.size();i++){
       if(i!=start){
        ans=(ans+ help(locations,i,finish,fuel- abs(locations[start]-locations[i])))%(1000000000+7);
       }
     }
       return dp[start][fuel] = ans;
   }
  
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n=locations.size();
      dp.resize(n+1, vector<int>(fuel+1,-1));
      return help(locations,start,finish,fuel);
    }
};