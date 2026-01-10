// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == NULL)
            return head;

        ListNode *tmp = head;
        while (tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val)
                tmp->next = tmp->next->next;
            else
                tmp = tmp->next;
        }
        return head;
    }
};