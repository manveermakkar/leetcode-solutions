class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1) return true;
        int count=0;
        int x=0;
        for(int i=1;i<s.size();i++){
        if(s[i]=='1') {
            count++;
            continue;
        }
        if(s[i]=='0') {
            x=i;
            break;
        }
        }
        if(count+1==s.size()) return true;
        for(int j=x;j<s.size();j++){
            if(s[j]=='1') return false;
        }
        return true;
    }
};
