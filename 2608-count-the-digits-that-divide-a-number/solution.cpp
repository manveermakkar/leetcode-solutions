class Solution {
public:
    int countDigits(int num) {
        vector<int> dividedby;
        int num1=num;
        while(num>0){
            int x=num%10;
            if(num1%x==0) dividedby.push_back(x);
             num=num/10;
        }
        
        return dividedby.size();
    }
};
