class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int c=0;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
      int maxim=INT_MIN;
      for( auto p:m){
        if(p.second>maxim) maxim=p.second;
      }
      for(auto p:m){
        if(maxim==p.second) c+=maxim;
      }
      return c;
    }
};
