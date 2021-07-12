class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1==word2) return true;
        unordered_map<char,int> m1,m2;
        for(int i=0;i<word1.size();i++){
            m1[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            m2[word2[i]]++;
        }
        for(auto m11:m1){
            if(m2.find(m11.first)==m2.end()){
                return false;
            }
        }
        vector<int> v1,v2;
        for(auto m11:m1){
            v1.push_back(m11.second);
        }
        for(auto m22:m2){
            v2.push_back(m22.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
        
        
    }
};