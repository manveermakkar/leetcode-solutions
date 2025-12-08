class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int x=1;x<n;x++){
            for(int j=1;j<n;j++){
              int c=sqrt(x*x+j*j);
               if(c*c == x*x+j*j && c<=n)
               count++;
          }
        }
        return count;
    }
};
