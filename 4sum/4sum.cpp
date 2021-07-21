class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>set;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(n<4) break;
            for(int j=i+1;j<n-2;j++){
                int o=j+1,p=n-1;
                int target2=target-nums[i]-nums[j];
                while(o<p){
                    int mysum=nums[o]+nums[p];
                    if(mysum==target2){
                       set.insert({nums[i], nums[j], nums[o], nums[p]});
                        o++;
                       
                    }
                    else if(mysum>target2){
                        p--;
                    }
                    else {
                        o++;
                    }
                }
            }
        }
        vector<vector<int>> ans(set.begin(),set.end());
        return ans;
        
    }
};