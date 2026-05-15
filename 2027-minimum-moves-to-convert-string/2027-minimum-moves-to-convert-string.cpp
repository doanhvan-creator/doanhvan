class Solution {
public:
    int minimumMoves(string s) {

        int moves = 0;

        for (int i = 0; i < s.length(); ) {

            if (s[i] == 'X') {
                moves++;

                // One move converts this and next 2 chars
                i += 3;
            }
            else {
                i++;
            }
        }

        return moves;
    }
};