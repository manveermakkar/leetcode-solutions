class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int s,int e){
         int mid=s+(e-s)/2;
         if(e>=s){
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) return binarysearch(nums,target,s,mid-1);
            if(nums[mid]<target) return binarysearch(nums,target,mid+1,e);
         }
         return -1;
    }
    int search(vector<int>& nums, int target) {
     int s=0;
     int e=nums.size()-1;
     return binarysearch(nums,target,s,e);
    }
};
