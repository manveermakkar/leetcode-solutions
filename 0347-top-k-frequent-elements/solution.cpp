class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;

        // count frequency
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        vector<int> num;
        vector<int> freq;

        for(auto p : m){
            num.push_back(p.first);
            freq.push_back(p.second);
        }

        // sort based on frequency (ascending)
        for(int i=0;i<num.size();i++){
            for(int j=i+1;j<num.size();j++){
                if(freq[i] > freq[j]){
                    swap(freq[i], freq[j]);
                    swap(num[i], num[j]);
                }
            }
        }

        vector<int> ans;

        // pick top k (from end)
        for(int i=num.size()-1; i>=0 && k>0; i--){
            ans.push_back(num[i]);
            k--;
        }

        return ans;
    }
};
