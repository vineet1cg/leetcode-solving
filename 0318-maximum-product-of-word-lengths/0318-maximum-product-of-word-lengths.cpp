class Solution {
public:
    int maxProduct(std::vector<std::string>& words) {
        int n = words.size();
        vector<int> masks(n, 0);
        
        
        for (int i = 0; i < n; ++i) {
            for (char c : words[i]) {
                masks[i] |= (1 << (c - 'a'));
            }
        }
        
        int max_val = 0;
        
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                
                if ((masks[i] & masks[j]) == 0) {
                    int product = words[i].length() * words[j].length();
                    max_val = std::max(max_val, product);
                }
            }
        }
        
        return max_val;
    }
};