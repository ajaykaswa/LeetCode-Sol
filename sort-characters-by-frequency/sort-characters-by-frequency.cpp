class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto a:mp){
            pq.push({a.second,a.first});
        }
        string ans="";
        while(!pq.empty()){
            int a=pq.top().first;
            char b=pq.top().second;
            while(a>0){
                ans.push_back(b);
                a--;
            }
            pq.pop();
        }
        return ans;
    }
};