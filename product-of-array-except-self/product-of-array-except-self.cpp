class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n),right(n);
        left[0]=1;
        int sum=1;
        for(int i=0;i<nums.size()-1;i++){
            sum=sum*nums[i];
            left[i+1]=sum;
        }
        sum=1;
        right[n-1]=1;
        for(int i=nums.size()-1;i>0;i--){
            sum=sum*nums[i];
            right[i-1]=sum;
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};