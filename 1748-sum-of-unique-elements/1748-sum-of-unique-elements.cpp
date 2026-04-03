class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> count(101, 0);
        
        // đếm tần suất
        for (int x : nums) {
            count[x]++;
        }
        
        int sum = 0;
        
        // cộng các số xuất hiện đúng 1 lần
        for (int i = 1; i <= 100; i++) {
            if (count[i] == 1) {
                sum += i;
            }
        }
        
        return sum;
    }
};