class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto a:chars){
            mp[a]++;
        }
        int ans=0;
       
        for(int i=0;i<words.size();i++){
             unordered_map<char,int>mp1(mp);
             int count=0;
            for(auto b: words[i]){
                if(mp1[b]>0){
                    mp1[b]--;
                    count++;
                }
            }
            if(count==words[i].size()) ans+=count;
        }
        return ans;
    }
};