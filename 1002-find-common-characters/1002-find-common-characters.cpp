class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<string> ans;

        string s = words[0];

        for (char c : s) {

            int ind;

            for (int i = 1; i < words.size(); i++) {

                ind = words[i].find(c);

                if (ind == -1) {
                    break;
                }

                words[i].erase(ind, 1);
            }

            if (ind != -1) {
                ans.push_back(string(1, c));
            }
        }

        return ans;
    }
};