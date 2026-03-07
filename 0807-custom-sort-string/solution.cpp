class Solution {
public:
    string customSortString(string order, string s) {
        string fin = "";

        // add characters according to order
        for(char x : order){
            for(char y : s){
                if(x == y){
                    fin += x;
                }
            }
        }

        // add remaining characters not in order
        for(char y : s){
            if(order.find(y) == string::npos){
                fin += y;
            }
        }

        return fin;
    }
};
