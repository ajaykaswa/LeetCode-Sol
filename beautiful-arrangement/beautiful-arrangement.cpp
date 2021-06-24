class Solution {
public:
    int count=0;
    void helper(vector<int>vec,vector<int> &ans,int i){
        if(i==vec.size()){
            count++;
            return;
        }
        for(int k=i;k<vec.size();k++){
            if( (i+1)%vec[k]==0 || vec[k]%(i+1)==0 ){
            swap(vec[k],vec[i]);
            helper(vec,ans,i+1);
            swap(vec[k],vec[i]);
            }
        }
    }
    
    int countArrangement(int n) {
        vector<int> vec;
        for(int i=0;i<n;i++){
            vec.push_back(i+1);
        }
        vector<int >ans;
        helper(vec,ans,0);
        return count;
    }
};