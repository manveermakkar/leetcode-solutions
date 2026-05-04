class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<int>c;
        vector<int>v;
        for(auto p:m){
            c.push_back(p.first);
            v.push_back(p.second);
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]<v[j]){
                    swap(v[i],v[j]);
                    swap(c[i],c[j]);
                }
            }
        }
        string x="";
        
        for(int i=0;i<c.size();i++){
            for(int j=0;j<v[i];j++){
                x+=c[i];
            }
        }
        return x;
    }
        
};
