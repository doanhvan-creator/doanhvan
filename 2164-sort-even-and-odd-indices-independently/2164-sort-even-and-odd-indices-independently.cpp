class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd;
        
        // tách
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        
        // sort
        sort(even.begin(), even.end()); // tăng dần
        sort(odd.begin(), odd.end(), greater<int>()); // giảm dần
        
        // gán lại
        int e = 0, o = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) nums[i] = even[e++];
            else nums[i] = odd[o++];
        }
        
        return nums;
    }
};