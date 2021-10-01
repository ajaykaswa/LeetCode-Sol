class Solution {
public:
  bool DFS(vector<int>& nums,vector<int>& visited,int sum ,int curr,int n,int k){
    if(k==1) return true;
    if(curr==sum) return DFS(nums,visited,sum,0,0,k-1);

    for(int j=n;j<nums.size();j++){
    if(visited[j]||curr+nums[j]>sum) continue;
      visited[j]=true;
      if(DFS(nums,visited,sum,curr+nums[j],j+1,k)) return true;
      visited[j]=false;
    }
    return false;
  }
  
    bool canPartitionKSubsets(vector<int>& nums, int k) {
              int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
      if(nums.size()<k||sum%k!=0) return false;
        sum=sum/k;
      vector<int>visited(nums.size(), false);
       return DFS(nums,visited,sum,0,0,k);
    
    }
};