class Solution {
public:
    int minFlips(string target) {
        int count=0;
        int n=target.size();
        int j=0;
        char k='0';
        while(j<n){
            if(target[j]!=k){
                count++;
            }
            k=target[j];
            j++;
        }
        return count;
    }
};