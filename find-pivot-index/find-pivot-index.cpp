class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int left[n],right[n];
        left[0]=0,right[n-1]=0;
        
        for(int i=0;i<n-1;i++){
            left[i+1]=nums[i]+left[i];
        }
        for(int i=n-1;i>=1;i--){
            right[i-1]=right[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(left[i]==right[i]) return i;
        }
        return -1;
    }
};