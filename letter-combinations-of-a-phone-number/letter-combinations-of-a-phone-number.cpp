class Solution {
public:
    vector<string> ans;
    vector<string> vec={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void help(string digits,string s,int i){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }
        for(auto c:vec[digits[i]-'2']){
            s.push_back(c);
            help(digits,s,i+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
       if(digits=="") return ans;
        help(digits,"",0);
        return ans;
    }
};