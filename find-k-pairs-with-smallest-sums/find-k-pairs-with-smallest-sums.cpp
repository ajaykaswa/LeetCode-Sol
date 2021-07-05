class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        typedef pair<int,pair<int,int>>ppi;
        priority_queue<ppi>pq;
        for(int i=0;i<nums1.size();i++){
      //      if(pq.size()==k&&nums1[i]>nums2[nums2.size()-1]) break;
            for(int j=0;j<nums2.size();j++){
                pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                if(pq.size()>k) pq.pop();
            }
        }
        while(!pq.empty()){
            ppi curr=pq.top();
            pq.pop();
            
            ans.push_back({curr.second.first,curr.second.second});
        }
        return ans;
    }
};