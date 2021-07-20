class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int i=1;
        while(1==1){
            int sum=i,k=0;
            for(int j=0;j<nums.size();j++){
                sum=nums[j]+sum;
                if(sum<=0) break;
                if(sum>0) k++;
            }
            if(k==nums.size()) return i;
            i++;
        }
        return 1;
    }
};