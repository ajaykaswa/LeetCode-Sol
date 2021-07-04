class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
      string a,b;
    for(int i:nums1){
        a+=i-'0';
    }
    for(int i:nums2){
        b+=i-'0';
    }
    int dp[a.length()+1][b.length()+1];
    memset(dp,0,sizeof(dp));
    int ans =0;
    for(int i=1;i<=a.length();i++){
        for(int j=1;j<=b.length();j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = 0;
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;;
    }
};