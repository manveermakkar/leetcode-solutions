class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            int sum=0,sum1=0;
            for(int j=0;j<=i;j++){
                 sum=sum+nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                 sum1=sum1+nums[k];
            }
            if(abs(sum-sum1)%2==0) count++;
        }
        return count;
    }
};
