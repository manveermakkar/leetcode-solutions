class Solution {
public:
    int findGCD(vector<int>& nums) {
     long long max=0;
     long long min=1001;   
     for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
     }
     for(int i=0;i<nums.size();i++){
        if(nums[i]<min){
            min=nums[i];
        }
     }
     while(max!=min){
        if(min>max){
            min=min-max;
        }
        else{
 max=max-min;
        }
       
         }
     return max;
    }

};
