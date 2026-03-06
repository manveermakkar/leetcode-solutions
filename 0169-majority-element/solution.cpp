class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        int count=1;
        for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]) count++;
          else{
            ans.push_back(count);
            count=1;
          }
          if(i==(nums.size()-1)) ans.push_back(count);
        }
       int max=INT_MIN;
       int maxindex=0;
       for(int i=0;i<ans.size();i++){
        if(ans[i]>max){
            max=ans[i];
            maxindex=i;
        }
       }
       auto it=s.begin();
       advance(it,maxindex);
       return *it;
       }
};
