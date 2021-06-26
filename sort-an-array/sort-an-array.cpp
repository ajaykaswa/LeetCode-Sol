class Solution {
public:
    void merge(vector<int> &nums,int i,int mid,int j){
        int l1=mid-i+1;
        int l2=j-mid;
        int left[l1],right[l2];
        for(int k=0;k<l1;k++){
            left[k]=nums[i+k];
        }
        for(int k=0;k<l2;k++){
            right[k]=nums[k+mid+1];
        }
        int n=0,m=0,o=i;
        while(n<l1&&m<l2){
            if(left[n]<=right[m]){
                nums[o]=left[n];
                o++,n++;
            }
            else{
                nums[o]=right[m];
                o++,m++;
            }
        }
        while(n<l1){
            nums[o]=left[n];
            o++,n++;
        }
        while(m<l2){
            nums[o]=right[m];
            o++;
            m++;
        }
    }
    void helper(vector<int> &nums,int i,int j){
        if(i>=j) return ;
            int mid= i +(j-i)/2;
        helper(nums,i,mid);
        helper(nums,mid+1,j);
        merge(nums,i,mid,j);
    }
    vector<int> sortArray(vector<int>& nums) {
       helper(nums,0,nums.size()-1); 
        return nums;
    }
};