class Solution {
public:
    string convertToBase7(int num) {
    if(num == 0) return "0";

    string x = "";
    bool negative = false;

    if(num < 0){
        negative = true;
        num = -num;
    }

    while(num > 0){
        char y = (num % 7) + '0';
        x = y + x;   // fix: build in correct order
        num /= 7;
    }
    if(negative) x = "-" + x;
    return x;
}
};
