class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int el=arr[0];
        int count=0;
        int s=arr.size()/4;
        for(int i=0;i<arr.size();i++){
            if(el==arr[i]){
                count++;
            }
            else{
                el=arr[i];
                count=1;
            }
            if(count>s){
                return arr[i];
            }
        }
          return 1;
    }
};
