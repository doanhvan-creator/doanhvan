class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result;
        int index = 1;
        
        while (ss >> word) {
            // kiểm tra nguyên âm
            char first = tolower(word[0]);
            if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                word += "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }
            
            // thêm 'a'
            word += string(index, 'a');
            
            
            // ghép kết quả
            result += word + " ";
            index++;
        }
        
        // xóa khoảng trắng cuối
        result.pop_back();
        return result;
    }
};