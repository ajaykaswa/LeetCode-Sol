class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> map;
        for (int i = 0;i <trips.size();i++){
            map[trips[i][1]] += trips[i][0]; 
            map[trips[i][2]] -= trips[i][0];
        }
        for (auto a:map) { 
            capacity -= a.second;
            if (capacity < 0){ 
                return false;
            }
        }
        return true;
    }
};