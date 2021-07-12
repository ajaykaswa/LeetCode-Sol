class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size()/k;
        for(int i=1;i<=n;i++){
            auto itr=mp.begin();
            int a=itr->first;
            for(int j=a;j<a+k;j++){
                if(mp.find(j)==mp.end()){
                    return false;
                }
                mp[j]--;
                if(mp[j]==0)
                   mp.erase(j);
            }
        }
        return true;
    }
};