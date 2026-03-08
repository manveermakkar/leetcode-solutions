class Solution {
public:
    double trimMean(vector<int>& arr) {
        float removecount=0.05*arr.size();
        int rem=(int)removecount;
        int rem2=rem;
        sort(arr.begin(),arr.end());
        while(rem>0){
            arr.pop_back();
            rem--;
        }
        reverse(arr.begin(),arr.end());
        while(rem2>0){
            arr.pop_back();
            rem2--;
        }
        int s=0;
        for(int i =0;i<arr.size();i++){
            s+=arr[i];
        }
        double d=(double)s/arr.size();
        return d;
    }
};
