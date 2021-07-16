class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>v1,v2;
        for(int i=0;i<queries.size();i++){
            map<char,int>m11;
            for(int j=0;j<queries[i].size();j++){
                m11[queries[i][j]]++;
            }
            v1.push_back(m11.begin()->second);
        }
        for(int i=0;i<words.size();i++){
            map<char,int>m11;
            for(int j=0;j<words[i].size();j++){
                m11[words[i][j]]++;
            }
            v2.push_back(m11.begin()->second);
        }
        vector<int> ans;
        for(int i=0;i<v1.size();i++){
            int count=0;
            for(int j=0;j<v2.size();j++){
                if(v2[j]>v1[i]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};