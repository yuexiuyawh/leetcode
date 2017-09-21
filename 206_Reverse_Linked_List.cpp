//迭代
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=NULL;
        ListNode* res=NULL;
        while(head)
        {
            temp=head;
            head=head->next;
            temp->next=res;
            res=temp;
        }
        return res;
    }
};

//递归
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newhead;
        if(!head||!head->next) return head;
        newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
};
