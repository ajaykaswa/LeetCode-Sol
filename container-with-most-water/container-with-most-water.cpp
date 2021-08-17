class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,ans1=0;
      int i=0,j=height.size()-1;
      while(i<j){
        ans=min(height[i],height[j])*(j-i);
        ans1=max(ans1,ans);
        if(height[i]<height[j])
          i++;
        else j--;
      }
      return ans1;
    }
};