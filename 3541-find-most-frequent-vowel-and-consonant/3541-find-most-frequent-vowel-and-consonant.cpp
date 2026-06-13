class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freqV(26, 0);
        vector<int> freqC(26, 0);

        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                freqV[c - 'a']++;
            } else {
                freqC[c - 'a']++;
            }
        }

        int maxV = *max_element(freqV.begin(), freqV.end());
        int maxC = *max_element(freqC.begin(), freqC.end());

        return maxV + maxC;
    }
};