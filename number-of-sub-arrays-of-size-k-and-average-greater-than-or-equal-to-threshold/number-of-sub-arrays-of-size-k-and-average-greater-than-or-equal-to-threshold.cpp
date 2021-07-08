class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0,count=0;
        threshold=threshold*k;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=threshold) count++;
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            if(sum>=threshold) count+=1;
        }
        return count;
    }
};