class Solution {
public:
     int digcount(int n){
        int x=0;
        while(n>0){
        n=n/10;
        x++;
        }
        return x;
     }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(digcount(nums[i])%2==0)count++;
        }
        return count;
    }
};
