class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        
        vector<int> sorted = score;
        sort(sorted.begin(), sorted.end(), greater<int>());
        
        unordered_map<int,int> mp;
        
        // store rank of each score
        for(int i = 0; i < n; i++){
            mp[sorted[i]] = i + 1;
        }
        
        vector<string> result(n);
        
        for(int i = 0; i < n; i++){
            int rank = mp[score[i]];
            
            if(rank == 1) result[i] = "Gold Medal";
            else if(rank == 2) result[i] = "Silver Medal";
            else if(rank == 3) result[i] = "Bronze Medal";
            else result[i] = to_string(rank);
        }
        
        return result;
    }
};

