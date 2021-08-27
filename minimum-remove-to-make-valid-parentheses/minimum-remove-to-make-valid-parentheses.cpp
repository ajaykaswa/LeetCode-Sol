class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st,st1;
      int a=0;
      for(int i=0;i<s.size();i++){
        if(s[i]==')'){
          if(a>0){
            st.push(s[i]);
            a--;
          }
          else continue;
        }
        else {
          if(s[i]=='(') a++;
          st.push(s[i]);
        }
      }
      string s1="";
      while(!st.empty()){
        s1+=st.top();
        st.pop();
      }
      
      a=0;
      for(int i=0;i<s1.size();i++){
        if(s1[i]=='('){
          if(a>0){
            st1.push(s1[i]);
            a--;
          }
          else continue;
        }
        else {
          if(s1[i]==')') a++;
          st1.push(s1[i]);
        }
      }
      string s2="";
      while(!st1.empty()){
        s2+=st1.top();
        st1.pop();
      }
      return s2;
    }
};