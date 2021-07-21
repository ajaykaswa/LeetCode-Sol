class Solution {
public:
    vector<int> vec;
    vector<int> vec2;
    Solution(vector<int>& nums) {
        for(auto num:nums){
            vec.push_back(num);
            vec2.push_back(num);
        }
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return vec2;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for(int i=0;i<vec.size();i++){
            int j=rand()%(vec.size()-i);
            swap(vec[i],vec[i+j]);
        }
        return vec;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */