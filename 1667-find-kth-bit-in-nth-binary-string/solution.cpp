class Solution {
public:
    string invert(string n){
        for(int i=0;i<n.size();i++){
            if(n[i]=='1') n[i]='0';
            else n[i]='1';
        }
        return n;
    }
    string findbit(int n){
        if(n==1) return "0";
       string prev = findbit(n-1);
    string x = invert(prev);
    reverse(x.begin(), x.end());

    return prev + "1" + x;
    }
    char findKthBit(int n, int k) {
        string a=findbit(n);
        return a[k-1];
    }
};
