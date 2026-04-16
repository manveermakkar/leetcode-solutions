class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for(int i = 0; i < queries.size(); i++) { 
            int idx = queries[i];
            int val = nums[idx];
            vector<int>& vec = mp[val];
            if(vec.size() == 1) {
                ans.push_back(-1);
                continue;
            }
            // Find position using binary search
            int pos = lower_bound(vec.begin(), vec.end(), idx) - vec.begin();
            int minDist = INT_MAX;
            // Check next equal element
            int next = vec[(pos + 1) % vec.size()];
            int diff1 = abs(next - idx);
            minDist = min(minDist, min(diff1, n - diff1));
            // Check previous equal element
            int prev = vec[(pos - 1 + vec.size()) % vec.size()];
            int diff2 = abs(prev - idx);
            minDist = min(minDist, min(diff2, n - diff2));
            ans.push_back(minDist);
        }        
        return ans;
    }
};


