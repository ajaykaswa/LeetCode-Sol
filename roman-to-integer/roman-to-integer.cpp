class Solution {
public:
    int romanToInt(string s) {
        int count=0;
       unordered_map<string,int>mp;
        mp["I"]=1;
        mp["IV"]=4;
        mp["V"]=5;
        mp["IX"]=9;
        mp["X"]=10;
        mp["XL"]=40;
        mp["L"]=50;
        mp["XC"]=90;
        mp["C"]=100;
        mp["CD"]=400;
        mp["D"]=500;
        mp["CM"]=900;
        mp["M"]=1000;
      int n=s.size();
      for(int i=0;i<n;i++){
         string st="";
            st+=s[i];
        if(i<n-1){
          st+=s[i+1];
          if(mp.find(st)!=mp.end()){
          count+=mp[st];
          i++;
          continue;
          }
          st.pop_back();
        }
         count+=mp[st];
        
      }
      return count;
      
    }
};