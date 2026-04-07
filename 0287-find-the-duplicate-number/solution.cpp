class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>x=nums;
        sort(x.begin(),x.end());
        for(int i=1;i<x.size();i++){
            if(x[i]==x[i-1]) return x[i-1];
        }
        return 0;
    }
};
