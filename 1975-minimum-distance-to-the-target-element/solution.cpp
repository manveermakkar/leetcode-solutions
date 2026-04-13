class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minim=1000;
        for(int i=0;i<nums.size();i++){
           if(target==nums[i]) minim=min(minim,abs(i-start));
        }
        return minim;
    }
};
