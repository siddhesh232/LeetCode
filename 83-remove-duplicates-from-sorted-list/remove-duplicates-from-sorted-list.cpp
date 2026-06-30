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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* temp = head;
        ListNode* front = head->next;

        while(temp != NULL && front != NULL)
        {
            if(temp->val == front->val)
            {
                temp->next = front->next;
                delete front;
                front = temp->next;
            }
            else{
                temp = front;
                front = front->next;
            }
        }
        return head;
    }
};