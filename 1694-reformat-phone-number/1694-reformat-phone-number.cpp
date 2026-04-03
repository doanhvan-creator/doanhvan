class Solution {
public:
    string reformatNumber(string number) {
        string digits = "";
        
        // Bước 1: xóa ký tự không phải số
        for (char c : number) {
            if (isdigit(c)) digits += c;
        }
        
        string result = "";
        int i = 0;
        int n = digits.size();
        
        // Bước 2: chia nhóm
        while (n - i > 4) {
            result += digits.substr(i, 3) + "-";
            i += 3;
        }
        
        // xử lý phần còn lại
        if (n - i == 4) {
            result += digits.substr(i, 2) + "-" + digits.substr(i + 2, 2);
        } else {
            result += digits.substr(i);
        }
        
        return result;
    }
};