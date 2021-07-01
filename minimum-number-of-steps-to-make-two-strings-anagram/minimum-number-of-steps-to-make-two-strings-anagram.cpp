class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp; 
        int count=0;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
      
        for(int i=0;i<t.size();i++){
            if(mp.find(t[i])!=mp.end()&&mp[t[i]]>0)
                mp[t[i]]--;  
            else count++;
        }
        return count;
    }
};