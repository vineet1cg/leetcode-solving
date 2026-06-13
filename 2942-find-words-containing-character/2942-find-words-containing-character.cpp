class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i = 0 ; i < words.size() ; i++){
            string c = words[i];
            for(char ch : c){
                if(ch==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};