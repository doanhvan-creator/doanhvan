class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> count(26, 0);
        
        // đếm tần suất
        for (char c : s) {
            count[c - 'a']++;
        }
        
        int freq = 0;
        
        // kiểm tra các tần suất
        for (int c : count) {
            if (c == 0) continue;
            
            if (freq == 0) freq = c;
            else if (freq != c) return false;
        }
        
        return true;
    }
};