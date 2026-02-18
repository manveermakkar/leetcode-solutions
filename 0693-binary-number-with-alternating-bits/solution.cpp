class Solution {
public:
    bool hasAlternatingBits(int n) {

        queue <int>q;
        while(n>0)
        {
             q.push(n%2);
            n=n/2;    
        }
        vector<int>arr;
        while(!q.empty()){
            arr.push_back(q.front());
            q.pop();
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]) return false;
        }
        return true;
           }
};
