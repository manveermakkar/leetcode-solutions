class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> totalfreq;
        for(int i:nums){
            totalfreq[i]++;
        }
        unordered_map<int,int> prefix;
        long long ans=0;
        const int mod=1e9+7;
        for(int i:nums){
            int total=totalfreq[2*i];
            int left=prefix[2*i];
            int right=total-left;
            if(i==0){
                right--;
            }
            prefix[i]++;
            ans=(ans+left*1ll*right)%mod;
        }
        return ans;
    }
};
