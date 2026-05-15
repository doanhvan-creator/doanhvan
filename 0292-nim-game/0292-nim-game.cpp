class Solution {
public:
    bool canWinNim(int n) {

        // Lose only when n is multiple of 4
        return n % 4 != 0;
    }
};