class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        vector<int> v1; // values
        vector<int> v2; // frequencies

        for(auto p : m){
            v1.push_back(p.first);
            v2.push_back(p.second); // ✅ FIXED
        }

        // sort based on freq, and value if tie
        for(int i=0;i<v1.size();i++){
            for(int j=i+1;j<v1.size();j++){
                if(v2[i] > v2[j] || 
                   (v2[i] == v2[j] && v1[i] < v1[j])) {
                    swap(v1[i], v1[j]);
                    swap(v2[i], v2[j]);
                }
            }
        }

        vector<int> ans;
        for(int i=0;i<v1.size();i++){
            for(int k=0;k<v2[i];k++){
                ans.push_back(v1[i]);
            }
        }

        return ans;
    }
};
