class Solution {
public:
    vector<string>ans;
    void solve(string s,int i,string st){
        if(i==s.size()) {
            ans.push_back(st);
            return;
        }
        if(isdigit(s[i])){
            st.push_back(s[i]);
            solve(s,i+1,st);
        }
        else {
            string s1=st;
            s1.push_back(tolower(s[i]));
            solve(s,i+1,s1);
            
            string s2=st;
            s2.push_back(toupper(s[i]));
            solve(s,i+1,s2);
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(s,0,"");
        return ans;
    }
};