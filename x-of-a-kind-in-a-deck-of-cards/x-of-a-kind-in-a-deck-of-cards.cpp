class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
         unordered_map<int,int> mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
            
        }
        int min1=INT_MAX;
        for(auto a:mp){
            min1=min(min1,a.second);
        }
        if(min1<2) return false;
        while(min1>=2){
            int count=0;
           for(auto a:mp){
           if((a.second%(min1))==0) count++;
            }
             if(count==mp.size()) return true;
            min1--;
        }
        return false;
    }
};