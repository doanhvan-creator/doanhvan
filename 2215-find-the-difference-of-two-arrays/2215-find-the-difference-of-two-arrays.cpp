class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> a, b;
        
        // phần tử có trong nums1 nhưng không có trong nums2
        for (int x : s1) {
            if (s2.find(x) == s2.end()) {
                a.push_back(x);
            }
        }
        
        // phần tử có trong nums2 nhưng không có trong nums1
        for (int x : s2) {
            if (s1.find(x) == s1.end()) {
                b.push_back(x);
            }
        }
        
        return {a, b};
    }
};