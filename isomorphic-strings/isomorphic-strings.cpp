class Solution {
public:
    bool isIsomorphic(string s, string t) {
      if(s.size() != t.size())
            return false;
        unordered_map<char,int> m1,m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        for(int i=0;i<t.size();i++){
            if(m2[t[i]]!=s[i]||m1[s[i]]!=t[i]){
                return false;
            }
        }
      
        return true;
    }
};