class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
            int count=0;
     unordered_map<string,int>mymap;
      for(int i=0;i<words.size();i++)
        mymap[words[i]]++;
        
      for(auto x:mymap){
          string p=x.first;
          int n=p.size();
          int j=0,i=0;
          int m=s.size();
          while (i < m && j < n) {
            if (s[i] == p[j]) {
                i++; j++;
            } 
            else 
                i++;
          }
          if(j==n) count+=x.second;
      }
        return count;
    }
};