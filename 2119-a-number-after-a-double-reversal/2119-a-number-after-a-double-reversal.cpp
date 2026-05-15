class Solution {
public:
    bool isSameAfterReversals(int num) {

        // Numbers ending with 0 lose leading zeros after reverse
        if (num != 0 && num % 10 == 0)
            return false;

        return true;
    }
};