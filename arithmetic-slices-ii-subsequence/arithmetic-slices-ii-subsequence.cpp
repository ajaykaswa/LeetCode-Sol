class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
           int n=nums.size();
        if (n < 3) {
            return 0;
        }

        vector<unordered_map<long long,int>> mp(n);
        int ans=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                 long long diff=(long long)nums[i]-(long long )nums[j];
                int sum=0;
                    if(mp[j].find(diff)!=mp[j].end())
                       sum=mp[j][diff];
                      mp[i][diff]+=1+sum;
                  ans+=sum;
            }
            
        }
        return ans;
    }
};