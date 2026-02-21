class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int max=INT_MIN;
       int maxindex;
       for(int i=0;i<nums.size();i++){
        if(max<nums[i]){max=nums[i];
          maxindex=i;
        }
       }
       for(int i=0;i<nums.size();i++){
        if(nums[i]==max)continue;
        if(nums[i]*2>max) return -1;
       }
    return maxindex;
    }
};
