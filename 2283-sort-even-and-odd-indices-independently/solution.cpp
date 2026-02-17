class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        // Separate elements
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        // Sort even indices in ascending order
        sort(even.begin(), even.end());

        // Sort odd indices in descending order
        sort(odd.begin(), odd.end(), greater<int>());

        // Put back into original array
        int e = 0, o = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0)
                nums[i] = even[e++];
            else
                nums[i] = odd[o++];
        }

        return nums;
    }
};

