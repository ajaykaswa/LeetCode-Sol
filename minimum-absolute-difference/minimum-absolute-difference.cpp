class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int min1=INT_MAX;
        for(int i=1;i<arr.size();i++){
            min1=min(min1,arr[i]-arr[i-1]);
        }
        for(int i=1;i<arr.size();i++){
            vector<int> ans1;
            if(arr[i]-arr[i-1]==min1){
            ans1.push_back(arr[i-1]);
            ans1.push_back(arr[i]);
            }
            if(ans1.size()>0){
            ans.push_back(ans1);
            }
        }
        return ans;
        
    }
};