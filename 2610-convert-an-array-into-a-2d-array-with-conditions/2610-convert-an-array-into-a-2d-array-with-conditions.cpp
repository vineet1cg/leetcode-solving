class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        unordered_map<int, int> freq;

        
        for (int val : nums) {
            freq[val]++;
        }

        
        int rows = 0;
        for (auto &p : freq) {
            rows = max(rows, p.second);
        }

        
        result.resize(rows);

        
        for (auto &p : freq) {
            int val = p.first;
            int count = p.second;

            for (int i = 0; i < count; i++) {
                result[i].push_back(val);
            }
        }

        return result;
    }
};