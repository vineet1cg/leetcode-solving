/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;

        while(head){
            res.push_back(head->val);
            head=head->next;
        }

        vector<int> ans(res.size(),0);

        for(int i =0;i<res.size();i++){
            for(int j =i+1;j<res.size();j++){
                if(res[j]>res[i]){
                    ans[i] = res[j];
                    break;
                }
            }
        }
        return ans;
    }
};