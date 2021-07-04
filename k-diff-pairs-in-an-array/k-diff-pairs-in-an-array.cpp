class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> s;
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-k)!=s.end())
                mp[min(nums[i],nums[i]-k)]=max(nums[i]-k,nums[i]);
            if(s.find(nums[i]+k)!=s.end())
                mp[min(nums[i],nums[i]+k)]=max(nums[i]+k,nums[i]);
             s.insert(nums[i]);
        }    
        return mp.size();
        
    }
};