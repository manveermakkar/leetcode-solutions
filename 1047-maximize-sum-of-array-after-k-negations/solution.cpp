class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
                k--;
            }
            if(k==0) break;
        }
        sort(nums.begin(),nums.end());
        if( k>0 && k%2!=0) nums[0]=-nums[0];
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
    
        }
        return s;
    }

};
