class Solution {
public:
    bool help(double n){
        if(n==1||n==2) return true;
        if(n<1) return false;
        return help(n/2);
    }
    bool isPowerOfTwo(int n) {
       return help(n);
    }
};