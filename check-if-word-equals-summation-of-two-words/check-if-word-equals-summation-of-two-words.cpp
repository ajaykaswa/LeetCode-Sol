class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a=0,b=0,c=0;
      for(auto n:firstWord){
        a=a*10+(n-'a');
      }
      for(auto n:secondWord){
        b=b*10+(n-'a');
      }
      for(auto n:targetWord){
        c=c*10+(n-'a');
      }
      return (a+b)==c;
    }
};