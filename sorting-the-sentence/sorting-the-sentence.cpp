class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
        string st="";
        for(int i=0;i<s.size();i++){
           if(s[i]==' ') continue; 
         else if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
                mp[s[i]-'0']=st;
                st="";
             continue;
            }
            st+=s[i];
        }
        for(auto a:mp){
            st+=a.second;
            st+=" ";
        }
        st.pop_back();
        return st;
    }
};