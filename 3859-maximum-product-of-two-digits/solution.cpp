class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int>p;
        while(n>0){
            p.push(n%10);
            n=n/10;
        }
        int x=p.top();
          p.pop();
          int y=p.top();
          return x*y;
    }
};
