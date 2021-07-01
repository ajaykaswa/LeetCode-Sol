class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int count=1;
        int ans=max(arr[0],arr[1]);
        arr.push_back(min(arr[0],arr[1]));
        int prev=ans;
        for(int i=2;i<n;i++){
            if(count==k) return ans;
            ans=max(ans,arr[i]);
            if(ans==prev) count++;
            else count=1;
            prev=ans;
        }
        return ans;
    }
};