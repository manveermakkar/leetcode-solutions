class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<int> s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        vector<int>ans;
        for(int i=v.size()-1;i>=0;i--){
          ans.push_back(v[i]);
          k--;
          if(k==0) break;
        }
        return ans;
    }
};
