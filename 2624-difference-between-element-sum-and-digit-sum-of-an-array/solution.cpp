class Solution {
public:
     int elsum(int num){
        int c=0;
        while(num>0){
          c+=num%10;
          num=num/10;
        }
        return c;
     }
    int differenceOfSum(vector<int>& nums) {
     int numsum=0;
     int elementsum=0;
     for(int i=0;i<nums.size();i++){
        numsum+=nums[i];
        elementsum+=elsum(nums[i]);
     }
     return abs(numsum-elementsum);   
    }
};
