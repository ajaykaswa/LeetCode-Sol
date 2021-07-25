class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
       vector<vector<int>> ans;
        if(firstList.size()==0||secondList.size()==0) return ans;
        int i=0,j=0;
      while(i<firstList.size()&&j<secondList.size()){
            int max1=max(firstList[i][0],secondList[j][0]);
            int min1=min(firstList[i][1],secondList[j][1]);
            
             if(min1>=max1){
                 ans.push_back({max1,min1});
             }
           
          if(secondList[j][1]<firstList[i][1]) j++;
          else i++;
        }
        return ans;
    }
};