class Solution {
public:
    int candy(vector<int>& ratings) {
        // --- TWEAK 1: Fast I/O booster ---
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = ratings.size(); // Store size once
        if (n == 0) return 0;

        vector<int> candies(n, 1);
        
        // Pass 1: Forward
        for(int i = 1; i < n; i++) { 
            if(ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        
        // Pass 2: Backward
        for(int i = n - 2; i >= 0; i--) {
            if(ratings[i] > ratings[i + 1]) { 
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        
        // --- TWEAK 2 & 3: Optimized Summation ---
        int total = 0;
        for(int c : candies) {
            total += c;
        }
        
        return total;
    }
};

