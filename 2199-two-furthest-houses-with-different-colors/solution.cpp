class Solution {
public:

    int max(int a,int b){
        if(a>b) return a;
        else return b;
    }
    int maxDistance(vector<int>& colors) {
        int maxdis=0;
    for(int i=0;i<colors.size();i++){
        if(colors[i]!=colors[colors.size()-1]){
            maxdis=max(colors.size()-1-i,maxdis);
            break;
        }
    }
    for(int i=colors.size()-1;i>=0;i--){
        if(colors[i]!=colors[0]){
            maxdis=max(i,maxdis);
            break;
        }
    }
    

   return maxdis;    
    }
};
