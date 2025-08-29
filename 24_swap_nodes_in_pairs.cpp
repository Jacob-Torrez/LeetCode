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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* last = dummy;
        ListNode* curr = head;
        while (curr && curr->next){
            ListNode* temp = curr->next;

            last->next = temp;
            curr->next = temp->next;
            temp->next = curr;

            last = curr;
            curr = curr->next;
        }

        return dummy->next;
    }
};