class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = -1;

        // tìm vị trí đầu tiên của ch
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                pos = i;
                break;
            }
        }

        // nếu không tìm thấy
        if (pos == -1) return word;

        // đảo đoạn từ 0 -> pos
        reverse(word.begin(), word.begin() + pos + 1);

        return word;
    }
};