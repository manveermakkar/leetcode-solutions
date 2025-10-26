class Solution {
public:
    int arrangeCoins(int n) {
        long long i=1; 
        long long sum=1;
        while(sum<n){
            i++;
            sum=((i)*(i+1))/2;
            
        }
        if(sum==n){
            return i;
        }
        return i-1;
    }
};
