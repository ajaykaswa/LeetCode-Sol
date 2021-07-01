class BrowserHistory {
public:
    string ans[101];
    int move=0;
     int n=0;
    BrowserHistory(string homepage) {
        ans[move]=homepage;
    }
    
    void visit(string url) {
        ans[++move]=url;
        n=move;
        
    }
    
    string back(int steps) {
        move=max(0,move-steps);
        return ans[move];
    }
    
    string forward(int steps) {
        move=min(n,move+steps);
        return ans[move];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */