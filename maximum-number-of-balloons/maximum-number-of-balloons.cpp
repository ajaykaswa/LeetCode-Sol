class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(int i=0; i<text.size();i++){
            mp[text[i]]++;
        }
        bool flag =true;
        int count=0;
        while(flag)
        {
            if(mp['b']>0 && mp['a']>0 && mp['l']>=2 && mp['o']>=2 && mp['n']>0)
            {
                count++;
                mp['b']--;
                mp['a']--;
                mp['l']--;mp['l']--;
                mp['o']--;mp['o']--;
                mp['n']--;
            }
            else
                flag=false;
        }
        return count;
    }
};