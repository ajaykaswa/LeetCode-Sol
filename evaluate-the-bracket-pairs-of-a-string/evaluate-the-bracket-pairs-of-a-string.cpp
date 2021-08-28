class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
      for(int i=0;i<knowledge.size();i++){
        mp[knowledge[i][0]]=knowledge[i][1];
      }
      
      string st="";
      string ans="";
      bool dis=true;
      for(int i=0;i<s.size();i++){
        if(s[i]=='('){
          dis=false;
          continue;
        }
    
        else if(s[i]==')'){
          dis=true;
          if(mp.find(st)!=mp.end()){
            ans+=mp[st];
          }
          else ans+='?';
          
          st="";
          continue;
        }
        if(dis==false){
          st+=s[i];
        }
        else if(dis==true){
          ans+=s[i];
        }
      }
      return ans;
    }
};