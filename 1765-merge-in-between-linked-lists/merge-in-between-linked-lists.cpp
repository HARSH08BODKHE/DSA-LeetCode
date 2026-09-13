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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode* tail1 = list1;
        ListNode* tail2 = list2;
        while(tail2->next!=NULL){
            tail2 = tail2->next;
        }
        ListNode* first = list1;
        for(int i=0;i<a-1;i++){
            first = first->next;
        }
        for(int i=0;i<=b;i++){
            tail1 = tail1->next;
        }
        first->next = list2;
        tail2->next = tail1;
        return list1;
    }
};