class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxsum=0;
        int minsum=0;
        for(int i=0;i<k;i++){
            minsum+=nums[i];
        }
        int x=0;
        for(int i=0;i<k;i++){
            maxsum+=nums[nums.size()-1-x];
            x++;
        }
        return abs(maxsum-minsum);
    }
};
