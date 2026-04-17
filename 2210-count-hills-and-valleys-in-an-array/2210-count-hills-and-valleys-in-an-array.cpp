class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> arr;
        
        // Bước 1: loại bỏ phần tử trùng liên tiếp
        arr.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                arr.push_back(nums[i]);
            }
        }
        
        int count = 0;
        
        // Bước 2: đếm hill và valley
        for (int i = 1; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                count++; // hill
            }
            else if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                count++; // valley
            }
        }
        
        return count;
    }
};