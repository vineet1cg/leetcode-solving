class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> res;

        for(auto &n:points){
            res.push_back(n[0]);
        }
        sort(res.begin(),res.end());

        int result = 0;

        for(int i = 1;i<res.size();i++){
            result = max(result,res[i]-res[i-1]);
        }

        return result;
    }
};