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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL) return NULL;

        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* r = new ListNode(-1);
        ListNode* a = r;

        while(l1 != NULL || l2 != NULL)
        {
            if(l1 != NULL && l2 != NULL)
            {
                if(l1->val <= l2->val)
                {
                    a->next = l1;
                    l1 = l1->next;
                    a = a->next;
                } else {
                    a->next = l2;
                    l2 = l2->next;
                    a = a->next;
                }   
            }
            if(l1 != NULL && l2 == NULL)
                {
                    a->next = l1;
                    return r->next;
                    //break;
                    
                }
                if(l2 != NULL && l1 == NULL)
                {
                    a->next = l2;
                    return r->next;
                    //break;
                
                }
        }
        return r->next;
    }
};