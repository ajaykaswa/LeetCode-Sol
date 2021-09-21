class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0,right=0;
        int max1=0;
        while(right<s.size()){
            if(mp.find(s[right])!=mp.end()){
                left=max(left,mp[s[right]]+1);
            }
            mp[s[right]]=right;
            max1=max(max1,right-left+1);
            right++;
        }
        return max1;
    }
};