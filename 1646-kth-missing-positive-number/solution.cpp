class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
        for (int num = 1; num <= arr[arr.size() - 1]; num++) {
            int y = 0;
            for (int j = 0; j < arr.size(); j++) {
                if (num == arr[j]) {  // ✅ correct comparison
                    y = 1;
                    break;
                }
            }
            if (y == 0) ans.push_back(num);
        }
        if (ans.size() >= k) return ans[k - 1];
        int remaining = k - ans.size();
        return arr[arr.size() - 1] + remaining;
    }
};
