class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people, 0);
        
        int give = 1;   // số kẹo sẽ phát
        int i = 0;      // index người
        
        while (candies > 0) {
            int idx = i % num_people;
            
            if (candies >= give) {
                result[idx] += give;
                candies -= give;
            } else {
                result[idx] += candies;
                break;
            }
            
            give++;
            i++;
        }
        
        return result;
    }
};