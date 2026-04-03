class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        
        // chuẩn hóa: ký tự không phải chữ → space, chữ → lowercase
        for (char &c : paragraph) {
            if (isalpha(c)) {
                c = tolower(c);
            } else {
                c = ' ';
            }
        }
        
        stringstream ss(paragraph);
        string word;
        string result;
        int maxCount = 0;
        
        while (ss >> word) {
            if (ban.count(word)) continue;
            
            freq[word]++;
            
            if (freq[word] > maxCount) {
                maxCount = freq[word];
                result = word;
            }
        }
        
        return result;
    }
};