class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxdis=0;
     int j=0,i=0;
     while(i<nums1.size() && j<nums2.size()){
        if(nums2[j]>=nums1[i]){
            maxdis=max(maxdis,j-i);
            j++;
        }
        else{
            i++;
        }
     }
     return maxdis;
      }  
};
