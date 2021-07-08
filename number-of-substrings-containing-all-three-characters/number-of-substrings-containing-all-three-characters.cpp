class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
      unordered_map<char,int> mp;
        int i=0,j=0;
        while(i<s.size()){
            mp[s[i]]++;
            while(mp['a']&&mp['b']&&mp['c']){
                ans+=s.size()-i;
                mp[s[j++]]--;
            }
            i++;
        }
        return ans;
    }
};