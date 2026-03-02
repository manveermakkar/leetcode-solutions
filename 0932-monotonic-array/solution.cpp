class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>nums2=nums;
        sort(nums.begin(),nums.end());
         vector<int> nums1= nums;
         reverse(nums1.begin(),nums1.end());
        vector<int> v=nums;
        vector<int> v1=nums1;
        if(nums2==v || nums2==v1){
            return true;
        }
        return false;
    }
};
