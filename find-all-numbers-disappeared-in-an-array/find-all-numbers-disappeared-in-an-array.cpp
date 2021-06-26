class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<bool> helper(n+1,false);
        for(int i=0;i<n;i++){
            helper[nums[i]]=true;
        }
        for(int i=1;i<=n;i++){
            if(helper[i]==false) ans.push_back(i);
        }
        return ans;
    }
};