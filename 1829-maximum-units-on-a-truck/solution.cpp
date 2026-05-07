class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(boxTypes[i][1] < boxTypes[j][1]) {
                    swap(boxTypes[i], boxTypes[j]);
                }
            }
        }
        int maxunits = 0;
        for(int i = 0; i < n; i++) {
            if(truckSize <= 0) break; 
            int boxesToTake = min(boxTypes[i][0], truckSize); 
            maxunits += boxesToTake * boxTypes[i][1];
            truckSize -= boxesToTake; 
        }
        return maxunits;
    }
};
