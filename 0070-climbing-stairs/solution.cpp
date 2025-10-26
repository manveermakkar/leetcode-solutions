class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        int p1=1;
        int p2=2;
        long long curr;
        for(int i=3;i<=n;i++){
           curr=p1+p2;
           p1=p2;
           p2=curr;
        }
        return curr;
    }
};
