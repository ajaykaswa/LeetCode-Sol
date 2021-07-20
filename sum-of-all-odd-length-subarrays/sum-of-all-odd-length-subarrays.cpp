class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int prefixSum[n];
        
        prefixSum[0] = arr[0];
         for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
        
        int sum=0;
        for(int i=0;i<n;i+=2){
            int total=prefixSum[i];
            int k=0;
            for(int j=i+1;j<n;j++){
                total+=prefixSum[j]-prefixSum[k];
                k++;
            }
            sum+=total;
        }
        return sum;
        
    }
};