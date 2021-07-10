class Solution {
public:
    bool help(double n){
        if(n==1) return true;
        if(n<1) return false;
        return help(n/3);
    }
    bool isPowerOfThree(int n) {
        return help(n);
    }
};