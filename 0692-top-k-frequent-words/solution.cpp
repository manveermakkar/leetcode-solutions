class Solution {
public:
    static bool cmp(pair<string,int> a, pair<string,int> b) {
        if (a.second != b.second)
            return a.second > b.second;   
        return a.first < b.first;         
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        for(int i = 0; i < words.size(); i++) {
            m[words[i]]++;
        }
        vector<pair<string,int>> ans;
        for(auto p : m) {
            ans.push_back(p);
        }
        sort(ans.begin(), ans.end(), cmp);
        vector<string> res;
        for(int i = 0; i < k; i++) {
            res.push_back(ans[i].first);
        }
        return res;
    }
};
