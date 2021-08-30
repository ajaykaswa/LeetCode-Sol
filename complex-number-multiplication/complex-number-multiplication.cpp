class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string a1,b1,a2,b2;
      int i=0;
      while(num1[i]!='+'){
        a1+=num1[i];
        i++;
      }
      i++;
      while(num1[i]!='i'){
        b1+=num1[i];
        i++;
      }
       i=0;
      while(num2[i]!='+'){
        a2+=num2[i];
        i++;
      }
      i++;
      while(num2[i]!='i'){
        b2+=num2[i];
        i++;
      }
      string a3="";
      int a4=stoi(a1)*stoi(a2) - stoi(b1)*stoi(b2);
      int b4=stoi(a1)*stoi(b2) + stoi(a2)*stoi(b1);
      
      a3+=to_string(a4);
      a3+='+';
      a3+=to_string(b4);
      a3+='i';
      return a3;
    }
};