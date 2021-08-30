class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cust) {
        double ans=0;
      double prev=cust[0][0];
      for(int i=0;i<cust.size();i++){
        if(prev>cust[i][0]){
          ans+=prev+cust[i][1]-cust[i][0];
          prev+=cust[i][1];
        }
        else {
          prev=cust[i][0]+cust[i][1];
          ans+=cust[i][1];
        }
      }
        return ans/cust.size();
    }
};