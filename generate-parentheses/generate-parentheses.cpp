class Solution {
public:
    void solve(vector<string>&ans,string & s,int open ,int close){
        if(open==0&&close==0) {
            ans.push_back(s);
            return;
        }
        if(open!=0){
            string s1=s;
            s1.push_back('(');
            solve(ans,s1,open-1,close);
        }
        if(close>open){
            string s2=s;
            s2.push_back(')');
            solve(ans,s2,open,close-1);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string > ans;
        string s="";
        int open=n;
        int close=n;
        solve(ans,s,open,close);
        return ans;
    }
};