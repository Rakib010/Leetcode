// Time complexity: O(n)
// Space complexity: O(1)

class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);
        ListNode *tmp = head;
        for (int i = 1; i <= sz / 2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};

// first count size of node 
// then check size/2 - node 
