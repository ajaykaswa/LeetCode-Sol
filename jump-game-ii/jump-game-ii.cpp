class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> vec(nums.size());
        vec[0]=0;
        for(int i=1;i<nums.size();i++){
            vec[i]=INT_MAX;
            for(int j=0;j<i;j++){
                if(nums[j]>=i-j){
                    vec[i]=min(vec[i],vec[j]+1);
                }
            }
        }
        return vec[nums.size()-1];
    }
};