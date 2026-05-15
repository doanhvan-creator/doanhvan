class Solution {
public:
    bool isPowerOfTwo(int n) {

        // Power of two has exactly one set bit
        return n > 0 && (n & (n - 1)) == 0;
    }
};