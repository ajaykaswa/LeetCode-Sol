class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
       int depth = log10(label)/log10(2);
        vector<int> ans(depth+1);
        while(depth>=0){
            ans[depth]=label;
            label=(int)pow(2,depth-1) + (int)pow(2,depth) - 1 - label/2;
            depth--;
        }
        return ans;
    }
};