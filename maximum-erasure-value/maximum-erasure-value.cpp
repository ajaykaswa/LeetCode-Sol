class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
      int ans=0,sum=0;
      int n=nums.size();
      vector<int> vec(n);
      int l=0;
      for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
         int index=mp[nums[i]];
           while (l<= index) {
                    mp.erase(nums[l]);
                    sum -= nums[l];
                    l+=1;
                }
        }
        sum+=nums[i];
        ans=max(sum,ans);
        mp[nums[i]]=i;
      }
      return ans;
    }
};