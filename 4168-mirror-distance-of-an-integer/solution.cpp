class Solution {
public:
    int reverse(int n){
        int revsum=0;
        while(n>0){
            int x=n%10;
            n=n/10;
            revsum=revsum*10+x;
        }
        return revsum;
    }
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};
