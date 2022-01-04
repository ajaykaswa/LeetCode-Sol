class Solution {
public:
     
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        int a=-1,b=-1;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(nums[mid]==target){
                a=mid;
                j=mid-1;
            }
            else if(nums[mid]<target)
                i=mid+1;
            else 
                j=mid-1;
        }
        
          i=0,j=nums.size()-1;
      
        while(i<=j){
            int mid= i+(j-i)/2;
            if(nums[mid]==target){
                b=mid;
                i=mid+1;
            }
            else if(nums[mid]<target) 
                i=mid+1;
            else
                j=mid-1;
        }
        return {a,b};
    }
};