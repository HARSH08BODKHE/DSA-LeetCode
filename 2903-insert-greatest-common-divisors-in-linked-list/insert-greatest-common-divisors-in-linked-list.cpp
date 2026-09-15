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
    int hcf(int a,int b){
        if(a==0) return b;
        else return hcf(b%a,a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        if(head->next==NULL) return head;
        ListNode* nextt = temp->next;
        while(nextt!=NULL){
            ListNode* ans = new ListNode(hcf(temp->val,nextt->val));
            ans->next = nextt;
            temp->next = ans;
            temp = ans->next;
            nextt = nextt->next;
        }
        return head;
    }
};