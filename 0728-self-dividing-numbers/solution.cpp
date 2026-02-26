class Solution {
public:
    bool checkselfdivision(int num) {
        vector<int> dividedby;
        int num1=num;
        while(num>0){
            int x=num%10;
            if(x==0) return false;
            if(num1%x!=0) return false;
             num=num/10;
        }
        return true;
        }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
      for(int i=left;i<=right;i++){
        if(checkselfdivision(i)==true) nums.push_back(i);
      }
      return nums;
    }
};
