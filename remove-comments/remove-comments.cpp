class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> ans;
        bool find = false;
        string s;
       for(int i=0;i<source.size();i++){
         for(int j=0;j<source[i].size();j++){
            if(!find&&j+1<source[i].size()&&source[i][j]=='/'&&source[i][j+1]=='/') break;
            else if(!find&&j+1<source[i].size()&&source[i][j]=='/'&&source[i][j+1]=='*'){
                  find=true;
                   j++;
                 }
            else if(find&&j+1<source[i].size()&&source[i][j]=='*'&&source[i][j+1]=='/'){
                 find =false;
                     j++;
                 }
            else if(!find) s.push_back(source[i][j]);
            
          }
           if(!find&&s.size()) ans.push_back(s) , s.clear();
        }
        return ans;
    }
};