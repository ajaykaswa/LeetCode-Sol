class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int md=arr[(n-1)/2];
        priority_queue< pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int>> >pq;
        for(int i=0;i<n;i++){
            pq.push({abs(arr[i]-md),arr[i]});
            
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};