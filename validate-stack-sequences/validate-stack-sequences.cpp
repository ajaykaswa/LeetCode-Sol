class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
         int j=0,n=pushed.size();
         if(n==0) return true;
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(pushed[i]);
            while(!s.empty()&& s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        return j==n;
    }
};