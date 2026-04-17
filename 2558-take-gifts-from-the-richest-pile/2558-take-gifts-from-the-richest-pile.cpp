class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        
        // đưa vào heap
        for (int x : gifts) {
            pq.push(x);
        }
        
        // thực hiện k lần
        while (k--) {
            long long x = pq.top();
            pq.pop();
            
            long long y = sqrt(x);
            pq.push(y);
        }
        
        // tính tổng
        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
    }
};