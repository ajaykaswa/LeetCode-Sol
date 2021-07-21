class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> map1;
        int n=nums1.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=nums1[i]+nums2[j];
                map1[sum]++;
            }
        }           
        for(int k=0;k<n;k++){
             for(int m=0;m<n;m++){
                 int sum=nums3[k]+nums4[m];
                 if(map1[(-1)*sum]!=0){
                     count+=map1[(-1)*sum];
                 }
             }
        }
        return count;
    }
};