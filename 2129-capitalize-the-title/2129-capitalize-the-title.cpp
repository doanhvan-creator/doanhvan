class Solution {
public:
    string capitalizeTitle(string title) {
        string result = "";
        int n = title.size();
        
        for (int i = 0; i < n; ) {
            int j = i;
            
            // tìm hết 1 từ
            while (j < n && title[j] != ' ') {
                j++;
            }
            
            int len = j - i; // độ dài từ
            
            if (len <= 2) {
                // chuyển hết về lowercase
                for (int k = i; k < j; k++) {
                    result += tolower(title[k]);
                }
            } else {
                // chữ đầu uppercase
                result += toupper(title[i]);
                // còn lại lowercase
                for (int k = i + 1; k < j; k++) {
                    result += tolower(title[k]);
                }
            }
            
            // thêm dấu cách nếu chưa phải từ cuối
            if (j < n) result += ' ';
            
            i = j + 1;
        }
        
        return result;
    }
};