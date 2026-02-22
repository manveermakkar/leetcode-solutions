class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans;
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }        
        
        int evenindex=0;
        int oddindex=0;
       for(int i=0;i<nums.size();i++){
          if(i%2==0){
            ans.push_back(even[evenindex++]);
          }
          else{
            ans.push_back(odd[oddindex++]);
          }
       }
       return ans;
    }
};
