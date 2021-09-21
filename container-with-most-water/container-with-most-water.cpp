class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int sum=0;
        while(i<j){
            int ans= min(height[i],height[j])*(j-i);
            sum=max(ans,sum);
            if(height[i]<=height[j]) i++;
            else j--;
        }
        return sum;
    }
};