class Solution {
public:
//     int helper(vector<int>& cardPoints, int k,int sum,int n,int i ,int j){
//         if(n==k) return sum;   
//          sum+=max(cardPoints[i]+helper(cardPoints,k,sum,n+1,i+1,j),cardPoints[j]+helper(cardPoints,k,sum,n+1,i,j-1));
//         return sum;
    
//     }
    
    int maxScore(vector<int>& cardPoints, int k) {
        // int sum=0;
        // int j=cardPoints.size()-1;
        // return helper(cardPoints,k,sum,0,0,j);
        int n=cardPoints.size();
        vector<int> left(k);
        vector<int> right(k);
        left[0] = cardPoints[0];
        right[0] = cardPoints[n-1];
        
        for(int i=1;i<k;i++){
            left[i] = left[i-1]+cardPoints[i];
            right[i] = right[i-1]+cardPoints[n-i-1];
        }
        
        int res = max(left[k-1],right[k-1]);
        
        for(int i=0;i<k-1;i++)
            res = max(res,left[i]+right[k-i-2]);
        
        return res;
    }
};