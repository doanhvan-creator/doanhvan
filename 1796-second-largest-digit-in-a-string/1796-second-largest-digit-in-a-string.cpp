class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        
        for (char c : s) {
            if (isdigit(c)) {
                st.insert(c - '0');
            }
        }
        
        if (st.size() < 2) return -1;
        
        auto it = st.rbegin(); // lớn nhất
        it++;
        return *it;
    }
};