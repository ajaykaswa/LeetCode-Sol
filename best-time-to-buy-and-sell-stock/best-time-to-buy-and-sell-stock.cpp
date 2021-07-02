class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();;
        int min1=prices[0];
        int max1=0;
        for(int i=1;i<n;i++){
            min1=min(min1,prices[i]);
            max1=max(max1,prices[i]-min1);
        }
        return max1;
    }
};