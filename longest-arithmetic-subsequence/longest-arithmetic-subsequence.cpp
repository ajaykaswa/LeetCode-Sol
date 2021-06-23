class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        vector<unordered_map<int,int>> mp(n);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 int diff=nums[j]-nums[i];
                    if(mp[i].find(diff)!=mp[i].end())
                        mp[j][diff]=1+mp[i][diff];
                    else 
                      mp[j][diff]=2;
                ans=max(ans,mp[j][diff]);
                
            }
            
        }
        return ans;
    }
};