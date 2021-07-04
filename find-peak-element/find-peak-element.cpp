class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
    int l = 0, h = nums.size() - 1;
    while (l < h) {
        int mid = (l + h) / 2;
        if (nums[mid] > nums[mid + 1])
            h = mid;
        else if (nums[mid] < nums[mid + 1])
            l = mid + 1;
    }
    
    return l;
    }
};