class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        while (temp != NULL) {

            if (temp->val == val) {
                // Remove temp
                prev->next = temp->next;
            }
            else {
                // Move previous pointer
                prev = temp;
            }

            temp = temp->next;
        }

        return dummy->next;
    }
};