class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for (auto ch : s){
        if (ch == 'c' && st.size() > 1 && st[st.size()-1] == 'b' && st[st.size() - 2] == 'a'){
            st.pop_back();
            st.pop_back();
        }
        else
            st.push_back(ch);
        
    }
    return st.empty();
    }
      
};