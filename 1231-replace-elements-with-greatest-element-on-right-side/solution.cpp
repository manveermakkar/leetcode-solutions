class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int maxval=INT_MIN;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>maxval) maxval=arr[j];
            }
            if(maxval==INT_MIN) maxval=-1;
            ans.push_back(maxval);
        }
        return ans;
    }
};
