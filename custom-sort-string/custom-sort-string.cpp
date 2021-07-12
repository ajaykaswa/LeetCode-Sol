class Solution {
public:
    string customSortString(string order, string str) {
        string ans="";
        unordered_map<char,int> mp2;
        // for(auto ord:order){
        //     mp[ord]++;
        // }
        for(auto st:str){
            mp2[st]++;
        }
        for(int i=0;i<order.size();i++){
            if(mp2.find(order[i])!=mp2.end()){
                while(mp2[order[i]]!=0){
                    ans+=order[i];
                    mp2[order[i]]--;
                }
            }
        }
        for(auto a:mp2){
            if(a.first>0){
                while(mp2[a.first]!=0){
                    ans+=a.first;
                    mp2[a.first]--;
                }
            }
        }
        
        return ans;
    }
};