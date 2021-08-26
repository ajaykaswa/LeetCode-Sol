class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size();
      int m =nums2.size();
     int L[m + 1][n + 1];

    for (int i=0; i <= m; i++){
        for (int j=0; j <= n; j++){
        if (i == 0||j == 0)
            L[i][j] = 0;
        else if (nums2[i - 1] == nums1[j - 1])
            L[i][j] = L[i - 1][j - 1] + 1;
     
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];

    }
};