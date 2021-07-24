class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,false);
        queue<int> q;
        // for(int i=0;i<rooms[0].size();i++){
        //     q.push(rooms[0][i]);
        // }
        q.push(0);
        while(!q.empty()){
            int a=q.front();
            visited[a]=true;
            q.pop();
            for(int i=0;i<rooms[a].size();i++){
                if(visited[rooms[a][i]]!=true){
                    q.push(rooms[a][i]);
                }
            }
        }
        for(auto a: visited){
            if(a==false) return false;
        }
    return true;
    }
};