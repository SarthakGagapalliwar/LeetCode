class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;

        // Move prev to the node just before the 'left' node
        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        // Start reversing
        ListNode* curr = prev->next;
        ListNode* next = nullptr;
        ListNode* prevSub = nullptr;

        for (int i = 0; i <= right - left; ++i) {
            next = curr->next;
            curr->next = prevSub;
            prevSub = curr;
            curr = next;
        }

        // Reconnect reversed sublist back into the list
        prev->next->next = curr;  // tail of reversed sublist points to node after 'right'
        prev->next = prevSub;     // node before 'left' points to new head of reversed sublist

        return dummy->next;
    }
};
