class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> freq;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                freq[nums[i + 1]]++;
            }
        }
        
        int result = 0, maxCount = 0;
        
        for (auto &p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                result = p.first;
            }
        }
        
        return result;
    }
};