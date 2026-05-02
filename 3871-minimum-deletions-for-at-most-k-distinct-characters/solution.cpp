class Solution {
public:
    int minDeletion(string s, int k) {
        map<char,int> m;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }

        vector<int> c;  
        vector<int> v;  

        for(auto p : m){
            c.push_back(p.first);   
            v.push_back(p.second);  
        }

        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[i] > v[j]){
                    swap(v[i], v[j]);
                    swap(c[i], c[j]);
                }
            }
        }

        int count = 0;  
        if(v.size() > k){
            int remove = v.size() - k;
            for(int i = 0; i < remove; i++){
                count += v[i];
            }
        }
        return count;
    }
};
