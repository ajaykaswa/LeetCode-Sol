class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i=0,n=s1.size();
        int count1=0,count2=0;
        while(i<n){
            if(s1[i]>=s2[i]) count1++;
            if(s1[i]<=s2[i]) count2++;
            i++;
        }
        if(count1==n||count2==n) return true;
        else return false;
    }
};