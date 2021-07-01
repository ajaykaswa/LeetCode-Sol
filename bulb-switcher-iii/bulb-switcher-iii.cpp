class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int ans=0;
        int max1=0,count=0;
        for(int i=0;i<light.size();i++){
            max1+=light[i]-1;
            count+=i;
            if(count==max1) ans++;
        }
        return ans;
    }
};