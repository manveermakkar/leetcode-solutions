class Solution {
public:
    int findmax(vector<int> v){
        int max=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>max) max=v[i];
        }
        return max;
    }
    int findmin(vector<int> v){
        int min=101;
        for(int i=0;i<v.size();i++){
            if(v[i]<min) min=v[i];
        }
        return min;
    }
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==2) return -1;
        int x=findmax(nums);
         int y=findmin(nums);
        for(int i=0;i<nums.size();i++){
            if((nums[i]!=x) && (nums[i]!=y)) return nums[i];
        }
        return -1;
    }
};
