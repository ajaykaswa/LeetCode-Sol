class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int> maxl(n),minr(n);
        int max1=-1;
        for(int i=0;i<n;i++){
            max1=max(max1,nums[i]);
            maxl[i]=max1;
        }
        int min1 = INT_MAX;
        for(int i=n-1;i>=0;i--){
            min1=min(min1,nums[i]);
            minr[i]=min1;
        }
        for(int i=0;i<n-1;i++){
            if(maxl[i]<=minr[i+1]){
                return (i+1);
            }
        }
        return -1;
    }
};