class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> count(50, 0); // max tổng chữ số < 50
        
        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = 0;
            int x = i;
            
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            
            count[sum]++;
        }
        
        int result = 0;
        for (int c : count) {
            result = max(result, c);
        }
        
        return result;
    }
};