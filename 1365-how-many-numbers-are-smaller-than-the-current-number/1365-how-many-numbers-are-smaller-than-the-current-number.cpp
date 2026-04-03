class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        unordered_map<int, int> mp;
        
        // lưu vị trí đầu tiên của mỗi số
        for (int i = 0; i < sorted.size(); i++) {
            if (mp.find(sorted[i]) == mp.end()) {
                mp[sorted[i]] = i;
            }
        }
        
        vector<int> result;
        
        for (int x : nums) {
            result.push_back(mp[x]);
        }
        
        return result;
    }
};