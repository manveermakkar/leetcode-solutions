class Solution {
public:
    int hIndex(vector<int>& citations) {
        int maxcitations = 0;
        for(int i = 1; i <= citations.size(); i++){
            int count = 0;
            for(int j = 0; j < citations.size(); j++){
                if(citations[j] >= i) count++;
            }
            if(count >= i){
                maxcitations = max(maxcitations, i);
            }
        }
        return maxcitations;
    }
};
