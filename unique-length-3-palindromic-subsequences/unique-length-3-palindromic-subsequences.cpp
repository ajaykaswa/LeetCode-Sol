class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,pair<int,int>>mp;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]={i,i};
            }
            else 
            mp[s[i]].second=i;
        }
         for(auto a:mp){
             if(a.second.second-a.second.first>=2){
                 int x=a.second.first;
                 int y=a.second.second;
                 unordered_set<int> set;
                 for(int i=x+1;i<y;i++){
                     set.insert(s[i]);
                 }
             count+=set.size();
             }
         }        
        return count;
    }
};