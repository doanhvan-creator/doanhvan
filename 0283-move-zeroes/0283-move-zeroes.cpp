class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        // đưa các số khác 0 lên phía trước
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // điền 0 vào cuối
        while (j < nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};