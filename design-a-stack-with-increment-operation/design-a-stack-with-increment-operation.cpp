class CustomStack {
public:
    vector<int> vec;
    int n=0;
    CustomStack(int maxSize) {
        vector<int> vec(maxSize+1, 0);
        n=maxSize;
    }
    
    void push(int x) {
        if(vec.size()<n)
        vec.push_back(x);
    }
    
    int pop() {
        if(vec.empty()) return -1;
        int a=vec[vec.size()-1];
        vec.pop_back();
        return a;
       
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k;i++){
            if(i==vec.size()) break;
            vec[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */