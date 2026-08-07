class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        // Find length and tail
        int n = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            n++;
        }

        k %= n;
        if (k == 0)
            return head;

        // Make circular
        tail->next = head;

        // Find new tail
        ListNode* newTail = head;
        for (int i = 0; i < n - k - 1; i++)
            newTail = newTail->next;

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};