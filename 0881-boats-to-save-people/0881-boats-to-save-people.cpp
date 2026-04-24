class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int left = 0;
        int right = people.size() - 1;
        int boats = 0;

        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                left++;  // ghép được
            }
            right--;     // người nặng luôn lên thuyền
            boats++;     // mỗi lần dùng 1 thuyền
        }

        return boats;
    }
};