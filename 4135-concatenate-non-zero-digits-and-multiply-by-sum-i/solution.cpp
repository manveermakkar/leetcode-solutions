class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s=0;
        long long num=0;
        long long ten=1;
        while(n>0){
            if(n%10!=0) {
                s+=n%10;
                num=num+ten*(n%10);
                ten=10*ten;
        }
        n=n/10;
    }
    return s*num;
    }
};
