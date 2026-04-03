class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> start;
        
        // lưu tất cả cityAi
        for (auto &p : paths) {
            start.insert(p[0]);
        }
        
        // tìm cityBi không nằm trong start
        for (auto &p : paths) {
            if (start.find(p[1]) == start.end()) {
                return p[1];
            }
        }
        
        return "";
    }
};