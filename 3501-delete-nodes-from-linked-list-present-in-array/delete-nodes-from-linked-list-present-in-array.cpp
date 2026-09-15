class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        // Mark values that need to be deleted
        vector<int> check(100001, 0);

        for (int x : nums) {
            check[x] = 1;
        }

        // Dummy node handles deletion of head easily
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        while (temp != NULL) {

            if (check[temp->val] == 1) {
                // Delete/skip current node
                prev->next = temp->next;
                temp = temp->next;
            }
            else {
                // Keep current node
                prev = temp;
                temp = temp->next;
            }
        }

        return dummy->next;
    }
};