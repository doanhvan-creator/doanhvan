class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string result = "";
        int count = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            result += s[i];
            count++;
            
            if (count == 3 && i != 0) {
                result += '.';
                count = 0;
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};