class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++){
            int c=0;
            for(int j=0;j<s.size();j++){
                if(s[i]==s[j] && i!=j) {
                     c=1;
                    break;
            }
        }
        if(c==0) return i;
    }
    return -1;
    }
};
