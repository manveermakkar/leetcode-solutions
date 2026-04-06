class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int s = 0;
            while(n > 0) {
                int x = n % 10;
                s += x * x;
                n /= 10;
            }
            n = s;
        }
        
        return n == 1;
    }
};
