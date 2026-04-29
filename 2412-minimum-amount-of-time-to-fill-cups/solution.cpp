class Solution {
public:
    int fillCups(vector<int>& amount) {
        int maxim=amount[0]+amount[1]+amount[2];
          int mx=max({amount[0],amount[1],amount[2]});
          return max(mx,(maxim+1)/2);
    }
};
